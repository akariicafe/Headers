@class NSString, NSError, CTXPCServiceSubscriptionContext;

@interface NPHServiceSubscriptionInfo : NSObject

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *serviceSubscriptionContext;
@property (nonatomic) BOOL shouldShowAddNewRemotePlan;
@property (nonatomic) BOOL shouldOfferRemotePlan;
@property (nonatomic) BOOL shouldOfferTrialPlan;
@property (nonatomic) BOOL shouldOfferSignupCompletion;
@property (retain, nonatomic) NSString *trialPlanType;
@property (retain, nonatomic) NSString *SIMStatus;
@property (nonatomic) unsigned long long planFlows;
@property (retain, nonatomic) NSError *persistentError;

- (void).cxx_destruct;
- (id)description;

@end
