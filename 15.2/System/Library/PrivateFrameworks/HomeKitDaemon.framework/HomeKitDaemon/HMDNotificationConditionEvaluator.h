@class NSSet, NSString;

@interface HMDNotificationConditionEvaluator : HMFObject <HMFLogging>

@property (readonly) NSSet *conditionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithConditionHandlers:(id)a0;
- (BOOL)conditionsPass:(id)a0;

@end
