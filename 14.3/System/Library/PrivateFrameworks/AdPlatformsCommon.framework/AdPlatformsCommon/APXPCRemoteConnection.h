@class NSString, NSXPCConnection, APUnfairLock, NSMutableArray;

@interface APXPCRemoteConnection : NSObject

@property (nonatomic) int numClients;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSString *machService;
@property (readonly, nonatomic) APUnfairLock *unfairLock;

+ (id)sharedConnectionFor:(id)a0;
+ (id)connectionFor:(id)a0;
+ (id)connectionForMachService:(id)a0;
+ (void)addSharedConnection:(id)a0 forMachService:(id)a1;
+ (id)sharedConnections;
+ (void)removeSharedConnectionForMachService:(id)a0;

- (void)removeDelegate:(id)a0;
- (void)connectionInvalidated;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)connectionInterrupted;
- (id)initWithDelegate:(id)a0;
- (void)invalidateForDelegate:(id)a0;
- (void)increaseConnectionCount;
- (void)decreaseConnectionCount;

@end
