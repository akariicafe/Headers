@class SAUIDecoratedText, NSString;

@interface SASTLineDetailItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAUIDecoratedText *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lineDetailItem;
+ (id)lineDetailItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
