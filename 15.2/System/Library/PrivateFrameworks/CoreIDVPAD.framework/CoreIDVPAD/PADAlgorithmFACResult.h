@class NSArray;

@interface PADAlgorithmFACResult : NSObject

@property (nonatomic) double assessment;
@property (retain, nonatomic) NSArray *faceprints;
@property (nonatomic) BOOL isHeadMovementDetected;

- (void).cxx_destruct;

@end
