@interface SFProximityEstimatorChannelMedian : SFProximityEstimator {
    struct { unsigned char channel; char rssiValues[3]; unsigned char rssiIndex; unsigned char rssiCount; char rssiMedian; } _channels[4];
}

- (int)_estimateRSSIForSFBLEDevice:(id)a0;
- (id)description;

@end
