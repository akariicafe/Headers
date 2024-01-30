@interface _DKNavigationMonitor : _DKMonitor

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL navigating;
@property (nonatomic) int startedToken;
@property (nonatomic) int stoppedToken;

+ (id)entitlements;
+ (void)setIsNavigating:(BOOL)a0;
+ (id)eventStream;

- (void)synchronouslyReflectCurrentValue;
- (void)saveState;
- (id)loadState;
- (void)dealloc;
- (void)stop;
- (void)setNavigationStatus:(BOOL)a0;
- (void)start;
- (void)deactivate;

@end
