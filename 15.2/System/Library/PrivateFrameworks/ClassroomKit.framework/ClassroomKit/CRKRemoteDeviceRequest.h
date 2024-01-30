@class NSString, CATTaskRequest;

@interface CRKRemoteDeviceRequest : CATTaskRequest

@property (copy, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) CATTaskRequest *remoteRequest;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
