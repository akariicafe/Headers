@class NSString, SAUIDecoratedText;

@interface SASTStockComparisonItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *stockValueFacet;
@property (retain, nonatomic) SAUIDecoratedText *subtitle;
@property (retain, nonatomic) SAUIDecoratedText *title;
@property (retain, nonatomic) SAUIDecoratedText *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stockComparisonItem;
+ (id)stockComparisonItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
