@class NSString, NSDictionary, UIImage, NSURL, NSNumber;

@interface CKCourse : NSObject

@property (copy, nonatomic) NSDictionary *sharedCourse;
@property (readonly, copy, nonatomic) NSString *courseID;
@property (readonly, nonatomic) NSNumber *managedClassID;
@property (readonly, nonatomic) long long enrollmentType;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *longName;
@property (readonly, copy, nonatomic) NSString *institutionName;
@property (readonly, nonatomic) UIImage *courseCover;
@property (readonly, nonatomic) NSURL *courseURL;

+ (void)initialize;
+ (id)sharedCoursePropertiesToFetch;

- (void).cxx_destruct;
- (id)initWithSharedCourse:(id)a0;

@end
