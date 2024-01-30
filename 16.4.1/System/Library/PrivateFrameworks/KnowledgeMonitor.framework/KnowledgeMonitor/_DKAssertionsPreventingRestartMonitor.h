@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor

@property (nonatomic) int userspaceAssertionsToken;
@property (nonatomic) int preventIdleSleepAssertionsToken;
@property (nonatomic) int systemAssertionsToken;
@property (nonatomic) int restartPreventerAssertionsToken;
@property (nonatomic) BOOL lastPreventingRestartAssertionsStatus;

+ (id)eventStream;
+ (id)entitlements;

- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)saveState;
- (id)loadState;
- (BOOL)areAssertionsPreventingRestart;
- (void)dealloc;
- (void)stop;
- (void)start;

@end
