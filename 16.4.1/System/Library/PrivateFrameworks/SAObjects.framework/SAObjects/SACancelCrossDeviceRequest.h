@class NSString;

@interface SACancelCrossDeviceRequest : SABaseClientBoundCommand

@property (nonatomic) BOOL cancelAssociatedRequests;
@property (copy, nonatomic) NSString *requestId;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
