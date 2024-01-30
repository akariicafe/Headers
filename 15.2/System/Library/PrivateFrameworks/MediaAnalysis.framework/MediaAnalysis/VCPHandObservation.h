@class NSArray;

@interface VCPHandObservation : NSObject

@property (retain, nonatomic) NSArray *keypoints;
@property (nonatomic) int chirality;
@property (nonatomic) int handID;
@property (nonatomic) int revision;

- (void).cxx_destruct;

@end
