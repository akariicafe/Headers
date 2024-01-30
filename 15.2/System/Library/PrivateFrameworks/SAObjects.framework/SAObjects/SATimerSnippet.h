@class NSArray;

@interface SATimerSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *timers;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
