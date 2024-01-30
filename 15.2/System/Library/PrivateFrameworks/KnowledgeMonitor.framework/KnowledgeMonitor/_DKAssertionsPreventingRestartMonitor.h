@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor

@property (nonatomic) int userspaceAssertionsToken;
@property (nonatomic) int preventIdleSleepAssertionsToken;
@property (nonatomic) int systemAssertionsToken;
@property (nonatomic) int restartPreventerAssertionsToken;
@property (nonatomic) BOOL lastPreventingRestartAssertionsStatus;

+ (id)eventStream;
+ (id)entitlements;

- (void)saveState;
- (id)loadState;
- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void)deactivate;
- (void)dealloc;
- (void)stop;
- (BOOL)areAssertionsPreventingRestart;

@end
