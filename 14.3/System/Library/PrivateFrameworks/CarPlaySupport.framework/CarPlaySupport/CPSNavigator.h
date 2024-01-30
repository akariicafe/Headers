@class CARNavigationOwnershipManager, NSString, NSHashTable, CPTrip;
@protocol CARNavigationOwnershipManagerDelegate;

@interface CPSNavigator : NSObject <CARNavigationOwnershipManagerDelegate, CPNavigationSessionManaging, BSInvalidatable>

@property (nonatomic, getter=isCompleted) BOOL completed;
@property (retain, nonatomic) NSHashTable *displayDelegates;
@property (retain, nonatomic) CARNavigationOwnershipManager *navigationOwnershipManager;
@property (retain, nonatomic) CPTrip *trip;
@property (weak, nonatomic) id<CARNavigationOwnershipManagerDelegate> navigationOwnershipDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void)navigationOwnershipChangedToOwner:(unsigned long long)a0;
- (void)invalidate;
- (void)pauseTripForReason:(unsigned long long)a0 description:(id)a1;
- (void)finishTrip;
- (void)cancelTrip;
- (void)showManeuvers:(id)a0 usingDisplayStyles:(id)a1;
- (void)updateTravelEstimates:(id)a0 forManeuver:(id)a1;
- (void)updateTripTravelEstimates:(id)a0;
- (void)addDisplayDelegate:(id)a0;
- (void)removeDisplayDelegate:(id)a0;

@end
