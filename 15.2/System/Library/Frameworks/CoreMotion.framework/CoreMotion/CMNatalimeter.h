@class CMNatalimeterInternal;

@interface CMNatalimeter : NSObject

@property (readonly, nonatomic) CMNatalimeterInternal *_internal;

+ (double)activeMetsThreshold;
+ (BOOL)setUserProfile:(id)a0 error:(id *)a1;
+ (id)maxNatalieEntries;
+ (double)briskMinuteMetsThreshold;
+ (BOOL)setUserInfo:(id)a0 error:(id *)a1;
+ (BOOL)resetCalibrationDataWithError:(id *)a0;
+ (BOOL)isNatalimeterAvailable;
+ (double)computeTimeToActiveCalories:(id)a0 user:(id)a1 workoutType:(long long)a2;
+ (id)userProfile;
+ (id)defaultUserProfile;
+ (id)computeRestingCaloriesAtRate:(unsigned long long)a0 user:(id)a1 duration:(double)a2;

- (id)init;
- (void)dealloc;
- (void)queryAbsoluteNatalimetryDataSinceRecord:(long long)a0 withHandler:(id /* block */)a1;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)a0 withHandler:(id /* block */)a1;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(id /* block */)a0;
- (void)stopAbsoluteNatalimetryDataUpdates;

@end
