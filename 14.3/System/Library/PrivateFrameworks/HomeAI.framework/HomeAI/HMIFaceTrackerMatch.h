@interface HMIFaceTrackerMatch : NSObject

@property (readonly) unsigned long long projectedFaceIndex;
@property (readonly) unsigned long long detectedFaceIndex;
@property (readonly) double score;

- (id)initWithProjectedFaceIndex:(unsigned long long)a0 detectedFaceIndex:(unsigned long long)a1 score:(double)a2;

@end
