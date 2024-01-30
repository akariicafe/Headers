@class DMFControlGroupIdentifier, NSString, NSNumber;

@interface CRKSetCoursePermissionRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (retain, nonatomic) NSString *feature;
@property (retain, nonatomic) NSNumber *permission;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
