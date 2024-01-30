@class NSXPCListenerEndpoint;

@interface DMFFetchClassroomInstructorEndpointResultObject : CATTaskResultObject

@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
