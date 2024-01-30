@class NSXPCListenerEndpoint;

@interface DMFFetchClassroomInstructorEndpointResultObject : CATTaskResultObject

@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
