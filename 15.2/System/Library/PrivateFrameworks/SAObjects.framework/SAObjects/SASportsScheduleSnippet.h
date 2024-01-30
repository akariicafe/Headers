@class NSArray;

@interface SASportsScheduleSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray *matchups;

+ (id)scheduleSnippet;
+ (id)scheduleSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
