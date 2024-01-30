@protocol WPZoneTrackerDelegate;

@interface WPZoneTracker : WPClient

@property (weak, nonatomic) id<WPZoneTrackerDelegate> delegate;
@property (nonatomic) BOOL wantEntry;
@property (nonatomic) BOOL wantExit;

- (void)exitedZone:(id)a0;
- (void)enteredZone:(id)a0 manufacturerData:(id)a1;
- (void)failedToRegisterZones:(id)a0 withError:(id)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)unregisterForZoneChanges:(id)a0;
- (void)stateDidChange:(long long)a0;
- (void)unregisterAllZoneChanges;
- (id)clientAsString;
- (void)registerForZoneChangesMatching:(id)a0;
- (id)description;
- (id)initWithDelegate:(id)a0;
- (void)fetchedCurrentlyTrackedZones:(id)a0;
- (void)invalidate;
- (void)getCurrentTrackedZones;

@end
