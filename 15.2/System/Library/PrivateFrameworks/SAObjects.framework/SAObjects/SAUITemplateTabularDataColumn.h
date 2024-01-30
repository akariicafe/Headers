@class NSNumber, NSArray;

@interface SAUITemplateTabularDataColumn : SAUITemplateBaseItem

@property (copy, nonatomic) NSNumber *minimumWidth;
@property (copy, nonatomic) NSNumber *rightMargin;
@property (copy, nonatomic) NSArray *values;

+ (id)tabularDataColumn;
+ (id)tabularDataColumnWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
