@class Protocol, NSUUID, APXPCRemoteConnection, APUnfairLock, NSString;

@interface APXPCActionRequester : NSObject <APXPCActionRequesterProtocol>

@property (class, readonly, nonatomic) APUnfairLock *unfairLock;

@property (retain, nonatomic) id remoteObjectProxy;
@property (retain, nonatomic) APXPCRemoteConnection *connection;
@property (retain, nonatomic) NSUUID *delegateID;
@property (readonly, nonatomic) Protocol *exportedInterface;
@property (readonly, nonatomic) id exportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)machService;
+ (BOOL)canShareConnection;

- (void)connectionInvalidated;
- (void)finished;
- (id)init;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)connectionInterrupted;
- (BOOL)isEqual:(id)a0;
- (id)remoteObjectInterface;
- (void)extendCollectionClassesForExportedInterface:(id)a0;
- (void)extendCollectionClassesForRemoteInterface:(id)a0;

@end
