@class NSArray;

@interface CRKFetchActiveStudentCourseIdentifiersResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *activeCourseIdentifiers;
@property (copy, nonatomic) NSArray *activeInstructorIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
