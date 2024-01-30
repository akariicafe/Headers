@interface _DKInCarMonitor : _DKMonitor

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL connected;
@property (nonatomic) int connectedToken;
@property (nonatomic) int disconnectedToken;

+ (void)setIsConnected:(BOOL)a0;
+ (id)eventStream;
+ (id)entitlements;

- (void)saveState;
- (void)setConnectedStatus:(BOOL)a0;
- (id)loadState;
- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void)deactivate;
- (void)dealloc;
- (void)stop;

@end
