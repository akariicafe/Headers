@class CMNatalimeterInternal;

@interface CMNatalimeter : NSObject

@property (readonly, nonatomic) CMNatalimeterInternal *_internal;

+ (BOOL)isNatalimeterAvailable;
+ (double)activeMetsThreshold;
+ (double)briskMinuteMetsThreshold;
+ (id)computeRestingCaloriesAtRate:(unsigned long long)a0 user:(id)a1 duration:(double)a2;
+ (double)computeTimeToActiveCalories:(id)a0 user:(id)a1 workoutType:(long long)a2;
+ (id)defaultUserProfile;
+ (id)maxNatalieEntries;
+ (BOOL)resetCalibrationDataWithError:(id *)a0;
+ (BOOL)setUserInfo:(id)a0 error:(id *)a1;
+ (BOOL)setUserProfile:(id)a0 error:(id *)a1;
+ (id)userProfile;

- (void)dealloc;
- (id)init;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)a0 withHandler:(id /* block */)a1;
- (void)queryAbsoluteNatalimetryDataSinceRecord:(long long)a0 withHandler:(id /* block */)a1;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(id /* block */)a0;
- (void)stopAbsoluteNatalimetryDataUpdates;

@end
