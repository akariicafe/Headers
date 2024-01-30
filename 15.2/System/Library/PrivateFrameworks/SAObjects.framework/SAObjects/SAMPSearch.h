@class NSArray;

@interface SAMPSearch : SADomainCommand

@property (copy, nonatomic) NSArray *constraints;
@property (nonatomic) long long maxResults;
@property (copy, nonatomic) NSArray *searchTypes;
@property (nonatomic) BOOL strict;

+ (id)search;
+ (id)searchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
