@class NSDictionary;
@protocol HFIconDescriptor;

@interface HRETriggerTemplate : HREActionTemplate

@property (retain, nonatomic) id<HFIconDescriptor> defaultIconDescriptor;
@property (retain, nonatomic) NSDictionary *iconDescriptorsByTriggerCharacteristic;

- (void).cxx_destruct;
- (id)_subclass_triggerBuilderForRecommendation:(id)a0 withObjects:(id)a1;
- (id)iconDescriptorForRecommendation:(id)a0 withObjects:(id)a1;
- (Class)recommendationClass;
- (id)triggerBuilderForRecommendation:(id)a0 withObjects:(id)a1;

@end
