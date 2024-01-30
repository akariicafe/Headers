@class NSString, SAReminderTrigger;

@interface SAReminderListSearch : SADomainCommand

@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAReminderTrigger *trigger;

+ (id)listSearch;
+ (id)listSearchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
