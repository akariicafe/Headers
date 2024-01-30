@class NSString, NSXPCConnection, APUnfairLock, NSMutableArray;

@interface APXPCRemoteConnection : NSObject

@property (nonatomic) int numClients;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSString *machService;
@property (readonly, nonatomic) APUnfairLock *unfairLock;

+ (void)removeSharedConnectionForMachService:(id)a0;
+ (void)addSharedConnection:(id)a0 forMachService:(id)a1;
+ (id)sharedConnections;
+ (id)connectionForMachService:(id)a0;
+ (id)connectionFor:(id)a0;
+ (id)sharedConnectionFor:(id)a0;

- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)increaseConnectionCount;
- (void)dealloc;
- (void)invalidateForDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)decreaseConnectionCount;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;

@end
