@class NSArray;

@interface SAClockSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *clocks;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
