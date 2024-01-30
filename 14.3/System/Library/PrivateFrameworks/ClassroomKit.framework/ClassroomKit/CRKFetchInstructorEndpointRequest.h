@class NSURL;

@interface CRKFetchInstructorEndpointRequest : CATTaskRequest

@property (retain, nonatomic) NSURL *classroomAppBundleURL;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
