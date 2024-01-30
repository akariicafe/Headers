@class NSURL, NSString;

@interface CRKFetchInstructorEndpointRequest : CATTaskRequest

@property (retain, nonatomic) NSURL *classroomAppBundleURL;
@property (copy, nonatomic) NSString *instructordBundleIdentifier;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
