@class ATXFreeMomentDataSource, NSUserDefaults;

@interface ATXMotionStateFeaturizer : NSObject {
    ATXFreeMomentDataSource *_freeMomentDataSource;
    NSUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
- (double)otherMotionStateChangeTimeStamp;
- (double)cyclingToStationaryTimeStamp;
- (double)drivingToStationaryTimeStamp;
- (id)initWithFreeMomentDataSource:(id)a0;
- (id)initWithFreeMomentDataSource:(id)a0 userDefaults:(id)a1;
- (double)latestTimeStamp:(id)a0;
- (double)runnningToStationaryTimeStamp;
- (void)setDefaultValuesForMotionStateFeatures:(id)a0;
- (double)stationaryToWalkingTimeStamp;
- (void)updateFeatureVectorMotionStateEvents:(id)a0;

@end
