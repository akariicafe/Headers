@class NSString;

@interface SACancelCrossDeviceRequest : SABaseClientBoundCommand

@property (nonatomic) BOOL cancelAssociatedRequests;
@property (copy, nonatomic) NSString *requestId;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
