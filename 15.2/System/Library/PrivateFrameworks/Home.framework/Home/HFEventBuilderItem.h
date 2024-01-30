@class NSSet, NSString, HFEventBuilder, HFTriggerNaturalLanguageOptions;

@interface HFEventBuilderItem : HFItem

@property (retain, nonatomic) NSSet *eventBuilders;
@property (retain, nonatomic) HFEventBuilder *representativeEventBuilder;
@property (retain, nonatomic) NSString *comparisonKey;
@property (retain, nonatomic) HFTriggerNaturalLanguageOptions *naturalLanguageOptions;

+ (id)eventBuilderItemForEventBuilders:(id)a0;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithEventBuilders:(id)a0;

@end
