@class NSString, HDSPEnvironment, HKSPObserverSet;
@protocol HDSPSource;

@interface HDSPTimeChangeListener : NSObject <HDSPNotificationObserver, HDSPEnvironmentAware, HDSPSource>

@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, nonatomic) id<HDSPSource> targetSource;

- (void)handleSignificantTimeChange;
- (void)environmentDidBecomeReady:(id)a0;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (void)addObserver:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)removeObserver:(id)a0;
- (void)handleTimeZoneChange;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;

@end
