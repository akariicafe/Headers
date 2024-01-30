@class SAPersonAttribute;

@interface SAPhoneClientCoordinationPhoneCall : SABaseClientBoundCommand

@property (retain, nonatomic) SAPersonAttribute *callRecipient;
@property (nonatomic) BOOL emergencyCall;

+ (id)clientCoordinationPhoneCall;
+ (id)clientCoordinationPhoneCallWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
