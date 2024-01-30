@class NSArray;

@interface SAUITemplateButton : SAUITemplateBaseItem

@property (copy, nonatomic) NSArray *commands;

+ (id)buttonWithDictionary:(id)a0 context:(id)a1;
+ (id)button;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
