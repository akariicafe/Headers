@class NSMutableDictionary, NSMutableArray;
@protocol NRNSXPCConnectionProtocol;

@interface NRRegistryClient : NRRegistry {
    NSMutableDictionary *_diffIndexObservers;
    BOOL _optimizeGetState;
    BOOL _outstandingRegistryQuery;
    int _devicesUpdateCounterNotifyToken_dispatch;
    int _devicesUpdateCounterNotifyToken_check;
    id<NRNSXPCConnectionProtocol> _connection;
    unsigned long long _tokenValue;
    unsigned long long _lastDevicesUpdateCounterNotifyTokenValue;
    unsigned long long _backoffDuration;
    NSMutableArray *_registryQueryCompletionBlockEntries;
}

@property (readonly, retain, nonatomic) id<NRNSXPCConnectionProtocol> connection;
@property (readonly, nonatomic) unsigned long long devicesUpdateCounter;
@property (readonly, retain, nonatomic) id<NRNSXPCConnectionProtocol> rawConnection;

+ (Class)proxyClass;
+ (Class)xpcConnectionClass;

- (void)_connectToDaemon;
- (void)_grabRegistryWithReadBlock:(id /* block */)a0;
- (BOOL)daemonIdle;
- (void)grabRegistryWithReadBlockAsync:(id /* block */)a0;
- (void)_grabRegistryWithWriteBlockAsync:(id /* block */)a0;
- (void)syncGrabRegistryWithReadBlock:(id /* block */)a0;
- (void)grabRegistryWithWriteBlockAsync:(id /* block */)a0;
- (void)grabRegistryWithReadBlock:(id /* block */)a0;
- (id)addDiffIndexObserverWithWriteBlock:(id /* block */)a0;
- (void)_queryDataAsyncIfNeededWithBlock:(id /* block */)a0;
- (void)removeDiffIndexObserver:(id)a0;
- (void)setCollection:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithParameters:(id)a0;

@end
