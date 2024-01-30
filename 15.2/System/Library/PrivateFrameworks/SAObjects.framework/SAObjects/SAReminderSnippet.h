@class NSArray;

@interface SAReminderSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *reminderLists;
@property (copy, nonatomic) NSArray *reminders;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
