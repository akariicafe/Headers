@class PETGoalConversionEventTracker, PETScalarEventTracker, PETDistributionEventTracker, NSObject;
@protocol OS_dispatch_queue;

@interface PPConnectionsMetricsTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) PETScalarEventTracker *opportunityTracker;
@property (retain, nonatomic) PETGoalConversionEventTracker *conversionTracker;
@property (retain, nonatomic) PETScalarEventTracker *dismissalTracker;
@property (retain, nonatomic) PETDistributionEventTracker *timingTracker;
@property (retain, nonatomic) PETScalarEventTracker *donationTracker;
@property (retain, nonatomic) PETScalarEventTracker *pasteboardTracker;

+ (id)sharedInstance;
+ (id)triggerFromCriteria:(id)a0;
+ (id)consumerStringForConsumerType:(unsigned long long)a0;
+ (id)donationSourceFromBundleID:(id)a0;

- (void)trackDismissalForConsumer:(id)a0 source:(id)a1 trigger:(id)a2 originatingApp:(id)a3 targetApp:(id)a4;
- (void)trackDonationFromBundleId:(id)a0 source:(id)a1 hasLatLon:(BOOL)a2 isEligible:(BOOL)a3;
- (void)trackTimingForConsumer:(id)a0 time:(unsigned long long)a1;
- (void)trackPasteboardItemFromBundleId:(id)a0 hasAddress:(BOOL)a1 isEligible:(BOOL)a2;
- (void)trackOpportunityForConsumer:(id)a0 trigger:(id)a1 targetApp:(id)a2;
- (void)trackConversionGoalForConsumer:(id)a0 source:(id)a1 trigger:(id)a2 originatingApp:(id)a3 targetApp:(id)a4 converted:(BOOL)a5;
- (id)init;
- (void).cxx_destruct;

@end
