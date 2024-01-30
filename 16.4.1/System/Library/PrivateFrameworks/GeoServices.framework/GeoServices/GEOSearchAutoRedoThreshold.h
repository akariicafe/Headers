@interface GEOSearchAutoRedoThreshold : NSObject

@property (readonly, nonatomic) unsigned long long numberOfVisiblePoisThreshold;
@property (readonly, nonatomic) double zoomInPercentThreshold;
@property (readonly, nonatomic) double zoomOutPercentThreshold;
@property (readonly, nonatomic) double panDeltaThresholdInMeters;

- (id)init;
- (id)initWithSearchAutoRedoThreshold:(id)a0;

@end
