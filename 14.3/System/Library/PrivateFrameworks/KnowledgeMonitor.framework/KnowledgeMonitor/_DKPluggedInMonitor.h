@interface _DKPluggedInMonitor : _DKMonitor

@property (nonatomic) BOOL enabled;
@property (nonatomic) int pluggedInToken;

+ (id)entitlements;
+ (id)_eventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;
+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (void)setIsPluggedIn:(BOOL)a0;

- (void)synchronouslyReflectCurrentValue;
- (void)dealloc;
- (long long)currentAdapterType:(BOOL *)a0;
- (void)stop;
- (void)setCurrentState;
- (void)start;
- (void)deactivate;

@end
