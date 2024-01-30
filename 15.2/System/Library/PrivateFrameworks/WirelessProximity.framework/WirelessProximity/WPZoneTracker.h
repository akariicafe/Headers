@protocol WPZoneTrackerDelegate;

@interface WPZoneTracker : WPClient

@property (weak, nonatomic) id<WPZoneTrackerDelegate> delegate;
@property (nonatomic) BOOL wantEntry;
@property (nonatomic) BOOL wantExit;

- (void)enteredZone:(id)a0 manufacturerData:(id)a1;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)getCurrentTrackedZones;
- (void)exitedZone:(id)a0;
- (id)description;
- (void)stateDidChange:(long long)a0;
- (void).cxx_destruct;
- (void)unregisterAllZoneChanges;
- (void)invalidate;
- (void)failedToRegisterZones:(id)a0 withError:(id)a1;
- (void)fetchedCurrentlyTrackedZones:(id)a0;
- (void)registerForZoneChangesMatching:(id)a0;
- (id)clientAsString;
- (void)unregisterForZoneChanges:(id)a0;

@end
