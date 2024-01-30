@class NSString;

@interface SASmsGroupSearch : SADomainCommand

@property (copy, nonatomic) NSString *smsGroupName;

+ (id)groupSearch;
+ (id)groupSearchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
