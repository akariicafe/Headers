@class NSArray;

@interface CRKFetchCoursesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *courses;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
