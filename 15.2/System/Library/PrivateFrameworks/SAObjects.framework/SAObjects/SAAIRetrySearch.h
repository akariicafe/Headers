@interface SAAIRetrySearch : SABaseClientBoundCommand

@property (nonatomic) double minimumDurationForRetry;

+ (id)retrySearch;
+ (id)retrySearchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
