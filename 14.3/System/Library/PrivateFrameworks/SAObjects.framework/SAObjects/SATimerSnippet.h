@class NSArray;

@interface SATimerSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *timers;

+ (id)snippetWithDictionary:(id)a0 context:(id)a1;
+ (id)snippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
