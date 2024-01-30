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

- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (void)environmentDidBecomeReady:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)addObserver:(id)a0;
- (void)handleTimeZoneChange;
- (void)handleSignificantTimeChange;
- (void)environmentWillBecomeReady:(id)a0;

@end
