@class NSDictionary, NSArray;

@interface SAUITemplateSegmentedControl : SAUITemplateBaseItem

@property (copy, nonatomic) NSDictionary *backgroundColors;
@property (copy, nonatomic) NSDictionary *textColors;
@property (copy, nonatomic) NSArray *titles;

+ (id)segmentedControlWithDictionary:(id)a0 context:(id)a1;
+ (id)segmentedControl;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
