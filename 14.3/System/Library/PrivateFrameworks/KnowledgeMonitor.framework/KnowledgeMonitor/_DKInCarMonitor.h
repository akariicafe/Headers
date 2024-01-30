@interface _DKInCarMonitor : _DKMonitor

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL connected;
@property (nonatomic) int connectedToken;
@property (nonatomic) int disconnectedToken;

+ (id)entitlements;
+ (void)setIsConnected:(BOOL)a0;
+ (id)eventStream;

- (void)synchronouslyReflectCurrentValue;
- (void)saveState;
- (id)loadState;
- (void)dealloc;
- (void)stop;
- (void)setConnectedStatus:(BOOL)a0;
- (void)start;
- (void)deactivate;

@end
