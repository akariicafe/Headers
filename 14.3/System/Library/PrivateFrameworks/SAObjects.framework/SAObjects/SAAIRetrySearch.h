@interface SAAIRetrySearch : SABaseClientBoundCommand

@property (nonatomic) double minimumDurationForRetry;

+ (id)retrySearch;
+ (id)retrySearchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
