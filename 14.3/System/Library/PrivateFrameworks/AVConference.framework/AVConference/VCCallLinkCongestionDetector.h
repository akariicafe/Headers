@interface VCCallLinkCongestionDetector : NSObject {
    double rttThreshold;
    double lossRateThreshold;
}

@property (nonatomic) BOOL isLinkCongested;

- (id)initWithRTTThreshold:(double)a0 lossRateThreshold:(double)a1;
- (void)addNewRTT:(double)a0 packetLossRate:(double)a1 timestamp:(double)a2;

@end
