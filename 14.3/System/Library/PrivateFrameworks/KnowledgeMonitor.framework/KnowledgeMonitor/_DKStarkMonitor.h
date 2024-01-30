@class NSString, CARSessionStatus;

@interface _DKStarkMonitor : _DKMonitor <CARSessionObserving>

@property (retain, nonatomic) CARSessionStatus *sessionStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithState:(BOOL)a0;

- (void)sessionDidConnect:(id)a0;
- (void)synchronouslyReflectCurrentValue;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)sessionDidDisconnect:(id)a0;
- (void)start;
- (void)updateCurrentState;
- (void)deactivate;

@end
