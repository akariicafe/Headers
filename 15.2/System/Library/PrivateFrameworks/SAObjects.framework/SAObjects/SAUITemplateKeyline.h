@class NSNumber;

@interface SAUITemplateKeyline : SAUITemplateBaseItem

@property (copy, nonatomic) NSNumber *width;

+ (id)keyline;
+ (id)keylineWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
