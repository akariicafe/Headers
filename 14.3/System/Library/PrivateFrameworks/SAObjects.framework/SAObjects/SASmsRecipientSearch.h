@class NSArray;

@interface SASmsRecipientSearch : SADomainCommand

@property (nonatomic) BOOL clientShouldResolvePhonesAndEmails;
@property (copy, nonatomic) NSArray *recipients;

+ (id)recipientSearch;
+ (id)recipientSearchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
