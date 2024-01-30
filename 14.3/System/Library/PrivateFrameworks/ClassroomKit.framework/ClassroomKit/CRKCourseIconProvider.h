@interface CRKCourseIconProvider : NSObject

+ (id)sharedIconProvider;

- (id)iconForCourseMascotType:(unsigned long long)a0 courseColorType:(unsigned long long)a1;
- (id)mascotImageNameForCourseMascotType:(unsigned long long)a0;
- (id)mascotColorNameForCourseColorType:(unsigned long long)a0;
- (id)accessibilityDescriptionForCourseMascotType:(unsigned long long)a0 colorType:(unsigned long long)a1;
- (id)accessibilityMascotNameForCourseMascotType:(unsigned long long)a0;
- (id)accessibilityColorNameForCourseColorType:(unsigned long long)a0;
- (id)iconForCourse:(id)a0;

@end
