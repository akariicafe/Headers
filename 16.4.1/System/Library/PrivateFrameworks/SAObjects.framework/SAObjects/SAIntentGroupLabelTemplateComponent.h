@class NSString;

@interface SAIntentGroupLabelTemplateComponent : SADomainObject

@property (copy, nonatomic) NSString *labelTemplateComponentStyle;
@property (copy, nonatomic) NSString *text;

+ (id)labelTemplateComponent;
+ (id)labelTemplateComponentWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
