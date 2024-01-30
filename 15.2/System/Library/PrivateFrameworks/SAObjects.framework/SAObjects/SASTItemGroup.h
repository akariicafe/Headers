@class NSArray;

@interface SASTItemGroup : SAUISnippet

@property (copy, nonatomic) NSArray *fallbackCommands;
@property (copy, nonatomic) NSArray *templateItems;

+ (id)itemGroup;
+ (id)itemGroupWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
