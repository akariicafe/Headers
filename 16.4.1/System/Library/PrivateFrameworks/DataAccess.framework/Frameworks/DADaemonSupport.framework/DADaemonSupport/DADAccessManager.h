@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface DADAccessManager : DADisableableObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *mainConnection;
@property (retain, nonatomic) NSMutableArray *clients;

+ (id)sharedManager;

- (void)removeClient:(id)a0;
- (id)stateString;
- (id)_init;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_setupServerConnection;
- (void)addPersistentClientWithAccountID:(id)a0 clientID:(id)a1 watchedIDs:(id)a2;
- (BOOL)isAccountID:(id)a0 folderID:(id)a1 watchedByClientBesides:(id)a2;

@end
