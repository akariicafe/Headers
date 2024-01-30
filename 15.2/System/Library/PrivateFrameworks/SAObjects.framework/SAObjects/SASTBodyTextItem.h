@class NSString, SADecoratedString;

@interface SASTBodyTextItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *bodyText;
@property (retain, nonatomic) SADecoratedString *decoratedBodyText;
@property (copy, nonatomic) NSString *position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bodyTextItem;
+ (id)bodyTextItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
