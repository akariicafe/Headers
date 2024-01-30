@class NSString;

@interface SAUIUserUtteranceView : SAAceView

@property (copy, nonatomic) NSString *text;

+ (id)userUtteranceView;
+ (id)userUtteranceViewWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
