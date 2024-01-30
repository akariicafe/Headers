@interface _DKNavigationMonitor : _DKMonitor

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL navigating;
@property (nonatomic) int startedToken;
@property (nonatomic) int stoppedToken;

+ (id)eventStream;
+ (void)setIsNavigating:(BOOL)a0;
+ (id)entitlements;

- (void)saveState;
- (id)loadState;
- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void)deactivate;
- (void)dealloc;
- (void)setNavigationStatus:(BOOL)a0;
- (void)stop;

@end
