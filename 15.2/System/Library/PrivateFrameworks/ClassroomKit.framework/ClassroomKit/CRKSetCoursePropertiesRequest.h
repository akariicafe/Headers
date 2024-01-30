@class DMFControlGroupIdentifier, NSString, NSArray;

@interface CRKSetCoursePropertiesRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSString *courseName;
@property (copy, nonatomic) NSString *courseDescription;
@property (copy, nonatomic) NSArray *anchorCertificates;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
