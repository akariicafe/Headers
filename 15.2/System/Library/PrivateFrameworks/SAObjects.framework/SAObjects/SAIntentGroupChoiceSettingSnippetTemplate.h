@protocol SAServerBoundCommand;

@interface SAIntentGroupChoiceSettingSnippetTemplate : SAIntentGroupSettingSnippetTemplate

@property (nonatomic) BOOL selected;
@property (retain, nonatomic) id<SAServerBoundCommand> updateSlotCommand;

+ (id)choiceSettingSnippetTemplate;
+ (id)choiceSettingSnippetTemplateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
