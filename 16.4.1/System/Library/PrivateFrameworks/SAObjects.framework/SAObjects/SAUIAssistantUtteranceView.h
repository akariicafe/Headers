@class NSString, NSNumber;

@interface SAUIAssistantUtteranceView : SAAceView

@property (copy, nonatomic) NSString *dialogIdentifier;
@property (copy, nonatomic) NSNumber *postDialogDelayInMilliseconds;
@property (copy, nonatomic) NSString *text;

+ (id)assistantUtteranceViewWithDictionary:(id)a0 context:(id)a1;
+ (id)assistantUtteranceView;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
