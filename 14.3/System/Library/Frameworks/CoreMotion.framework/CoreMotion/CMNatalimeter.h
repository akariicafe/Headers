@class CMNatalimeterInternal;

@interface CMNatalimeter : NSObject

@property (readonly, nonatomic) CMNatalimeterInternal *_internal;

+ (id)userProfile;
+ (id)maxNatalieEntries;
+ (id)defaultUserProfile;
+ (double)activeMetsThreshold;
+ (BOOL)setUserInfo:(id)a0 error:(id *)a1;
+ (id)computeRestingCaloriesAtRate:(unsigned long long)a0 user:(id)a1 duration:(double)a2;
+ (double)computeTimeToActiveCalories:(id)a0 user:(id)a1 workoutType:(long long)a2;
+ (BOOL)resetCalibrationDataWithError:(id *)a0;
+ (double)briskMinuteMetsThreshold;
+ (BOOL)isNatalimeterAvailable;
+ (BOOL)setUserProfile:(id)a0 error:(id *)a1;

- (id)init;
- (void)dealloc;
- (void)queryAbsoluteNatalimetryDataSinceRecord:(long long)a0 withHandler:(id /* block */)a1;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)a0 withHandler:(id /* block */)a1;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(id /* block */)a0;
- (void)stopAbsoluteNatalimetryDataUpdates;

@end
