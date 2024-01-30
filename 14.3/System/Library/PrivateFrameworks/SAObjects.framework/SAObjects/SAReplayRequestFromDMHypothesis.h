@class NSData;

@interface SAReplayRequestFromDMHypothesis : SAStartRequest

@property (copy, nonatomic) NSData *dmHypothesis;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
