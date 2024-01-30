@class NSString, NSDate;

@interface SAEmailSearch : SADomainCommand

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *fromEmail;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *timeZoneId;
@property (copy, nonatomic) NSString *toEmail;

+ (id)search;
+ (id)searchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
