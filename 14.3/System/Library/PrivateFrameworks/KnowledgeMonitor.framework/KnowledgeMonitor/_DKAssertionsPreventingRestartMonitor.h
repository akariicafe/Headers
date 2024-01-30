@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor

@property (nonatomic) int userspaceAssertionsToken;
@property (nonatomic) int preventIdleSleepAssertionsToken;
@property (nonatomic) int systemAssertionsToken;
@property (nonatomic) int restartPreventerAssertionsToken;
@property (nonatomic) BOOL lastPreventingRestartAssertionsStatus;

+ (id)entitlements;
+ (id)eventStream;

- (void)synchronouslyReflectCurrentValue;
- (void)saveState;
- (id)loadState;
- (BOOL)areAssertionsPreventingRestart;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)deactivate;

@end
