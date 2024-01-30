@interface CRKUsageStatistics : NSObject

+ (void)incrementKey:(id)a0;
+ (void)clearDistributionKey:(id)a0;
+ (void)pushDouble:(double)a0 forKey:(id)a1;
+ (void)logWillAutomaticallyJoinCourses:(BOOL)a0;
+ (void)logDidAcceptJoinCourse;
+ (void)logDidDenyJoinCourse;
+ (void)logDidModifyPermission;
+ (void)logDidAllowAction;
+ (void)logDidDenyAction;
+ (void)logDidShareDocument;
+ (void)logDidShareLink;
+ (void)logDidSuccessfullyEnroll;
+ (void)logDidEnterInvalidEnrollmentPin;
+ (void)logDidFailEnrollment;
+ (void)resetConfigurationCounts;
+ (void)logDidDeleteCourse;
+ (void)logCourseCount:(unsigned long long)a0;

@end
