@class NSError, CBDevice;

@interface CBHIDPerformanceSummary : NSObject

@property (retain, nonatomic) CBDevice *device;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) double errorRate;
@property (nonatomic) double intervalSecondsExpected;
@property (nonatomic) double intervalSecondsMax;
@property (nonatomic) char rssi;

- (void).cxx_destruct;

@end
