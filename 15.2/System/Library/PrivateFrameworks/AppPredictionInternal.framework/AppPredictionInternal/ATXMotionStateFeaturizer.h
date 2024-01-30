@class ATXFreeMomentDataSource, NSUserDefaults;

@interface ATXMotionStateFeaturizer : NSObject {
    ATXFreeMomentDataSource *_freeMomentDataSource;
    NSUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
- (id)initWithFreeMomentDataSource:(id)a0;
- (id)initWithFreeMomentDataSource:(id)a0 userDefaults:(id)a1;
- (double)stationaryToWalkingTimeStamp;
- (double)runnningToStationaryTimeStamp;
- (double)cyclingToStationaryTimeStamp;
- (double)drivingToStationaryTimeStamp;
- (double)otherMotionStateChangeTimeStamp;
- (double)latestTimeStamp:(id)a0;
- (void)setDefaultValuesForMotionStateFeatures:(id)a0;
- (void)updateFeatureVectorMotionStateEvents:(id)a0;

@end
