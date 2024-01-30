@class NSDictionary;

@interface CRKFetchCoursePermissionsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *permissionsByFeature;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
