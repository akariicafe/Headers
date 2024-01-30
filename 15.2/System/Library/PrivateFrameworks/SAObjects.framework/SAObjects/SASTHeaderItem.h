@class SAUIDecoratedText, NSString;

@interface SASTHeaderItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAUIDecoratedText *header;
@property (retain, nonatomic) SAUIDecoratedText *subtitle;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)headerItem;
+ (id)headerItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
