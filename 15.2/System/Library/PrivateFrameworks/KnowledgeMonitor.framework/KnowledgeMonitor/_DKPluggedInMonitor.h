@interface _DKPluggedInMonitor : _DKMonitor

@property (nonatomic) BOOL enabled;
@property (nonatomic) int pluggedInToken;

+ (BOOL)shouldMergeUnchangedEvents;
+ (id)eventStream;
+ (id)_eventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;
+ (id)entitlements;
+ (void)setIsPluggedIn:(BOOL)a0;

- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void)setCurrentState;
- (void)deactivate;
- (void)dealloc;
- (void)stop;

@end
