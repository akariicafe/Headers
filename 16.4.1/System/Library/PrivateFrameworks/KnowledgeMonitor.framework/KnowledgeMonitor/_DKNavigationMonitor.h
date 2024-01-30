@interface _DKNavigationMonitor : _DKMonitor

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL navigating;
@property (nonatomic) int startedToken;
@property (nonatomic) int stoppedToken;

+ (id)eventStream;
+ (id)entitlements;
+ (void)setIsNavigating:(BOOL)a0;

- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)saveState;
- (id)loadState;
- (void)setNavigationStatus:(BOOL)a0;
- (void)dealloc;
- (void)stop;
- (void)start;

@end
