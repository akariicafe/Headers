@class NSString;

@interface SAUIShowRequestHandlingStatus : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *asrStatus;
@property (copy, nonatomic) NSString *executionInputSystem;
@property (copy, nonatomic) NSString *requestHandlingStatus;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
