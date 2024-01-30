@class NSString, NSDate;

@interface SANoteSearch : SADomainCommand

@property (copy, nonatomic) NSString *contentQuery;
@property (copy, nonatomic) NSDate *fromDate;
@property (copy, nonatomic) NSDate *toDate;

+ (id)search;
+ (id)searchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
