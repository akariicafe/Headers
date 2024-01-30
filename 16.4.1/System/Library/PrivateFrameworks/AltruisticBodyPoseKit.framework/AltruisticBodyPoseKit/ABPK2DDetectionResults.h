@class NSArray, ABPK2DDetectionResult;

@interface ABPK2DDetectionResults : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *detectedSkeletons;
@property (retain, nonatomic) ABPK2DDetectionResult *trackedDetectionResult;
@property (retain, nonatomic) ABPK2DDetectionResult *rawDetectionResult;
@property (retain, nonatomic) ABPK2DDetectionResult *alignedDetectionResult;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;

@end
