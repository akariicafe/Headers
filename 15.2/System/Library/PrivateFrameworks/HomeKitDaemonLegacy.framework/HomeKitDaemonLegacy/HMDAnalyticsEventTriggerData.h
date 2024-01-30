@class NSArray, HMDAnalyticsPredicateData;

@interface HMDAnalyticsEventTriggerData : HMFObject

@property (nonatomic) int activationState;
@property (nonatomic) int activationType;
@property (copy, nonatomic) NSArray *events;
@property (retain, nonatomic) HMDAnalyticsPredicateData *predicate;
@property BOOL containsRecurrences;
@property BOOL executeOnce;

- (void).cxx_destruct;
- (id)initWithEventTrigger:(id)a0 isAdding:(BOOL)a1;

@end
