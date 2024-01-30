@class NSString, CARSessionStatus;

@interface _DKStarkMonitor : _DKMonitor <CARSessionObserving>

@property (retain, nonatomic) CARSessionStatus *sessionStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventStream;
+ (id)_eventWithState:(BOOL)a0;
+ (id)entitlements;

- (void)synchronouslyReflectCurrentValue;
- (void)sessionDidDisconnect:(id)a0;
- (void)sessionDidConnect:(id)a0;
- (void)deactivate;
- (void)updateCurrentState;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void).cxx_destruct;

@end
