@interface _DKInCarMonitor : _DKMonitor

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL connected;
@property (nonatomic) int connectedToken;
@property (nonatomic) int disconnectedToken;

+ (id)eventStream;
+ (id)entitlements;
+ (void)setIsConnected:(BOOL)a0;

- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)saveState;
- (id)loadState;
- (void)setConnectedStatus:(BOOL)a0;
- (void)dealloc;
- (void)stop;
- (void)start;

@end
