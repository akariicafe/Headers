@class NSArray;

@interface SAUITemplateTabularDataRow : SAUITemplateTabularDataGroup

@property (copy, nonatomic) NSArray *actions;

+ (id)tabularDataRow;
+ (id)tabularDataRowWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
