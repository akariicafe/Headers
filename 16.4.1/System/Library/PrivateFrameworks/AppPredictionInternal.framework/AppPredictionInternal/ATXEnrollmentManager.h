@interface ATXEnrollmentManager : NSObject

+ (id)getUserIdForScheme:(id)a0 enrollmentPeriod:(double)a1 enrollmentRate:(double)a2;
+ (id)getUserIdForScheme:(id)a0 enrollmentPeriod:(double)a1 enrollmentRate:(double)a2 currentDate:(id)a3 defaultsDomain:(id)a4;
+ (id)readCurrentEnrollmentUserIdFromDefaults:(id)a0 scheme:(id)a1;
+ (id)readLastEnrollmentDateFromDefaults:(id)a0 scheme:(id)a1;
+ (void)setCurrentEnrollmentUserId:(id)a0 forUserDefaults:(id)a1 scheme:(id)a2;
+ (void)setLastEnrollmentToDate:(id)a0 forUserDefaults:(id)a1 scheme:(id)a2;

@end
