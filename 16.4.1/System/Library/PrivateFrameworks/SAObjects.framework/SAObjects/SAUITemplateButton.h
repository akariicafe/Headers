@class NSArray;

@interface SAUITemplateButton : SAUITemplateBaseItem

@property (copy, nonatomic) NSArray *commands;

+ (id)button;
+ (id)buttonWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
