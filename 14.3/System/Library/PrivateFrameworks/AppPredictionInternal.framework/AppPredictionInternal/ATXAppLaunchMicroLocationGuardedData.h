@class NSDictionary, ATXLocationToLaunchCorrelation, NSDate;

@interface ATXAppLaunchMicroLocationGuardedData : NSObject {
    NSDictionary *_currentMicroLocation;
    NSDate *_currentMicroLocationDate;
    ATXLocationToLaunchCorrelation *_locationToAppLaunchCorrelation;
    ATXLocationToLaunchCorrelation *_locationToActionKeyCorrelation;
}

- (void).cxx_destruct;
- (id)getCurrentMicroLocation;
- (void)setCurrentMicroLocation:(id)a0;
- (id)initWithCurrentMicroLocation:(id)a0;
- (BOOL)microLocationExpired:(id)a0;

@end
