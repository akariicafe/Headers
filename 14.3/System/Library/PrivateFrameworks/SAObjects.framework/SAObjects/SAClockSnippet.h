@class NSArray;

@interface SAClockSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *clocks;

+ (id)snippetWithDictionary:(id)a0 context:(id)a1;
+ (id)snippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
