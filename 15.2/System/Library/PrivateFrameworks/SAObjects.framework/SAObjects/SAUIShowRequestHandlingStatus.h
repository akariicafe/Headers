@class NSString;

@interface SAUIShowRequestHandlingStatus : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *requestHandlingStatus;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
