@class NSData;

@interface SAStartHandoffRequest : SAStartRequest

@property (copy, nonatomic) NSData *handoffData;

+ (id)startHandoffRequest;
+ (id)startHandoffRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
