@protocol WPZoneTrackerDelegate;

@interface WPZoneTracker : WPClient

@property (weak, nonatomic) id<WPZoneTrackerDelegate> delegate;
@property (nonatomic) BOOL wantEntry;
@property (nonatomic) BOOL wantExit;

- (id)clientAsString;
- (void)stateDidChange:(long long)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)registerForZoneChangesMatching:(id)a0;
- (void)enteredZone:(id)a0 manufacturerData:(id)a1;
- (void)failedToRegisterZones:(id)a0 withError:(id)a1;
- (void)fetchedCurrentlyTrackedZones:(id)a0;
- (void)unregisterAllZoneChanges;
- (void)unregisterForZoneChanges:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)description;
- (void)getCurrentTrackedZones;
- (void)invalidate;
- (void).cxx_destruct;
- (void)exitedZone:(id)a0;

@end
