@class NSString;

@interface SAIntentGroupDetailLabelTemplateComponent : SAIntentGroupLabelTemplateComponent

@property (copy, nonatomic) NSString *detailText;

+ (id)detailLabelTemplateComponent;
+ (id)detailLabelTemplateComponentWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
