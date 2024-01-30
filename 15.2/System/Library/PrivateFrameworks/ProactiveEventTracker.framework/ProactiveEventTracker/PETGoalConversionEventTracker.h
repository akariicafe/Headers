@class NSString;

@interface PETGoalConversionEventTracker : PETEventTracker

@property (readonly, nonatomic) NSString *opportunityEvent;
@property (readonly, nonatomic) NSString *conversionEvent;

- (void)_logValue:(id)a0 forEvent:(id)a1 stringifiedProperties:(id)a2 metaData:(id)a3;
- (id)initWithFeatureId:(id)a0 opportunityEvent:(id)a1 conversionEvent:(id)a2 registerProperties:(id)a3;
- (id)_keyMetadataForEvent:(id)a0;
- (void)trackGoalOpportunityEventWithConversion:(BOOL)a0 propertyValues:(id)a1;
- (void).cxx_destruct;
- (void)trackGoalOpportunityEventWithPropertyValues:(id)a0;
- (void)trackGoalConversionEventWithPropertyValues:(id)a0;
- (id)initWithFeatureId:(id)a0 opportunityEvent:(id)a1 conversionEvent:(id)a2 registerProperties:(id)a3 propertySubsets:(id)a4;

@end
