@class NSXPCListenerEndpoint;

@interface CRKFetchInstructorEndpointResultObject : CATTaskResultObject

@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
