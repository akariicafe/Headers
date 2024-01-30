@class NSData;

@interface SAReplayRequestFromDMHypothesis : SAStartRequest

@property (copy, nonatomic) NSData *dmHypothesis;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
