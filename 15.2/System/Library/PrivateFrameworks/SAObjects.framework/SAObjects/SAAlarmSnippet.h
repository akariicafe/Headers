@class NSArray;

@interface SAAlarmSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *alarms;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
