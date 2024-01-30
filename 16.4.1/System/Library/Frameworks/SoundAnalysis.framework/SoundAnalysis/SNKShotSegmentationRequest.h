@class NSArray;

@interface SNKShotSegmentationRequest : NSObject

@property NSArray *fileURLs;
@property float backgroundEnergyPercentile;
@property float foregroundEnergyPercentile;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } hangoverDuration;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } minSegmentDuration;
@property float similarityThreshold;

- (id)init;

@end
