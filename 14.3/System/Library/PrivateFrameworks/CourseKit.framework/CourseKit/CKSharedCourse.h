@class NSString, NSNumber, UIImage;

@interface CKSharedCourse : NSManagedObject

@property (copy, nonatomic) NSString *courseID;
@property (retain, nonatomic) NSNumber *managedClassID;
@property (nonatomic) long long enrollmentType;
@property (copy, nonatomic) NSString *shortName;
@property (copy, nonatomic) NSString *longName;
@property (copy, nonatomic) NSString *institutionName;
@property (retain, nonatomic) UIImage *courseCover;
@property (copy, nonatomic) NSString *courseCoverChecksum;

- (void)setShortName:(id)a0;
- (void)setCourseID:(id)a0;
- (void)setManagedClassID:(id)a0;
- (void)setEnrollmentType:(long long)a0;
- (void)setLongName:(id)a0;
- (void)setInstitutionName:(id)a0;
- (void)setCourseCover:(id)a0;

@end
