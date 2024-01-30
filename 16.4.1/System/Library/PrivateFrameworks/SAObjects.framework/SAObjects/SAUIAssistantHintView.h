@class NSArray;

@interface SAUIAssistantHintView : SAUIAssistantUtteranceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *regions;

+ (id)assistantHintViewWithDictionary:(id)a0 context:(id)a1;
+ (id)assistantHintView;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
