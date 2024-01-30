@class NSString;

@interface SAUITemplateGroupView : SAUITemplateBaseItemGroup

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *layoutStyle;

+ (id)groupView;
+ (id)groupViewWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
