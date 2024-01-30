@class NSMutableSet, NSDate;

@interface ENBeaconCountMetrics : NSObject {
    double _previousTimestamp;
    unsigned long long _currentInsertionWindowIndex;
    NSMutableSet *_currentInsertionWindowObservedRPI;
    unsigned long long _beaconCountWindowCount;
    unsigned long long *_beaconCountWindows;
}

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double windowDuration;

- (void).cxx_destruct;
- (void)dealloc;
- (void)addAdvertisement:(id)a0;
- (void)enumerateBeaconCountWindows:(id /* block */)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 windowDuration:(double)a2;
- (unsigned long long)beaconCountAtDate:(id)a0;
- (id)differentialPrivacyRepresentationWithCountThresholds:(id)a0;

@end
