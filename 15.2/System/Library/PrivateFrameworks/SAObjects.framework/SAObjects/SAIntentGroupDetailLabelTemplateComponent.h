@class NSString;

@interface SAIntentGroupDetailLabelTemplateComponent : SAIntentGroupLabelTemplateComponent

@property (copy, nonatomic) NSString *detailText;

+ (id)detailLabelTemplateComponent;
+ (id)detailLabelTemplateComponentWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
