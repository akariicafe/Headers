@interface HFPlaceholderTriggerBuilder : HFTriggerBuilder

@property (nonatomic) BOOL isEditing;

+ (id)createPlaceholderTriggerForHome:(id)a0 withTriggerActionSetBuilder:(id)a1 context:(id)a2;

- (id)naturalLanguageNameOfType:(unsigned long long)a0;
- (id)commitItem;

@end
