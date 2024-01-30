@class NSDictionary;

@interface CRKFetchScreenObserversResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseCourseIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
