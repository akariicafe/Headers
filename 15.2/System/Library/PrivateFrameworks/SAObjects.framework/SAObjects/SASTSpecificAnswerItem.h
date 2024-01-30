@class SAUIDecoratedText, NSString;

@interface SASTSpecificAnswerItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAUIDecoratedText *decoratedFooter;
@property (retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property (copy, nonatomic) NSString *footer;
@property (copy, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specificAnswerItem;
+ (id)specificAnswerItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
