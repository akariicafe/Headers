@class NSString, NSArray, SASmsGroupName, NSDate, NSNumber;

@interface SASmsSearch : SADomainCommand

@property (copy, nonatomic) NSDate *end;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSNumber *outgoing;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSArray *senders;
@property (retain, nonatomic) SASmsGroupName *smsGroup;
@property (copy, nonatomic) NSDate *start;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSNumber *unread;

+ (id)search;
+ (id)searchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
