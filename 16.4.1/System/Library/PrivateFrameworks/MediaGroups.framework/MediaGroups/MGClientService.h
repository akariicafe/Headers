@class NSDictionary, NSXPCConnection;
@protocol MGClientConnectionProviderProtocol;

@interface MGClientService : NSObject <MGClientInterfaceProtocol, MGServiceInterfaceProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSDictionary *queries;
@property (readonly, nonatomic) id<MGClientConnectionProviderProtocol> provider;

+ (id)clientServiceWithConnectionProvider:(id)a0;

- (id)initWithConnectionProvider:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)HomeKitAccessoryOfType:(id)a0 accessoryIdentifier:(id)a1 homeIdentifier:(id)a2 categoryType:(id)a3 name:(id)a4 completion:(id /* block */)a5;
- (void)addMember:(id)a0 group:(id)a1 completion:(id /* block */)a2;
- (void)createGroupWithType:(id)a0 name:(id)a1 members:(id)a2 completion:(id /* block */)a3;
- (void)deleteGroup:(id)a0 completion:(id /* block */)a1;
- (void)query:(id)a0 didUpdate:(id)a1 completion:(id /* block */)a2;
- (void)removeMember:(id)a0 group:(id)a1 completion:(id /* block */)a2;
- (void)setName:(id)a0 group:(id)a1 completion:(id /* block */)a2;
- (void)startQueryWithPredicate:(id)a0 completion:(id /* block */)a1;
- (void)stopQuery:(id)a0 completion:(id /* block */)a1;

@end
