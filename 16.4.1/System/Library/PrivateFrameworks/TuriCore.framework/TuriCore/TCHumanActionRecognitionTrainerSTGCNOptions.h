@interface TCHumanActionRecognitionTrainerSTGCNOptions : NSObject

@property (nonatomic) long long batchSize;
@property (nonatomic) long long numFrames;
@property (nonatomic) long long numKeypoints;
@property (nonatomic) long long numClasses;
@property (nonatomic) float dropoutProbability;

- (void)validate;
- (id)init;

@end
