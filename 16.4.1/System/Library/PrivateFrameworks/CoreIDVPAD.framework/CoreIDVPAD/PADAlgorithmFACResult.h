@class NSArray;

@interface PADAlgorithmFACResult : NSObject

@property (nonatomic) double assessment;
@property (retain, nonatomic) NSArray *faceprints;
@property (nonatomic) BOOL isHeadMovementDetected;
@property (retain, nonatomic) NSArray *referenceFrameIndices;

- (void).cxx_destruct;

@end
