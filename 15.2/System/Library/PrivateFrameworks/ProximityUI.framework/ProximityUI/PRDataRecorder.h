@class NSMutableArray, NSMutableDictionary;

@interface PRDataRecorder : NSObject <PRItemLocalizerDataRecorder>

@property (retain, nonatomic) NSMutableArray *measurements;
@property (retain, nonatomic) NSMutableArray *estimatorInput;
@property (retain, nonatomic) NSMutableArray *estimatorOutput;
@property (retain, nonatomic) NSMutableArray *rangeEstimatorOutput;
@property (retain, nonatomic) NSMutableDictionary *customData;

+ (id)generateFilename;
+ (id)generateTemporaryDirectoryURL;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)stopAndDiscard;
- (void)writeSensorDataToURL:(id)a0;
- (void)discardSensorData;
- (id)stopAndSave;
- (id)writeToURL;
- (void)recordProximityMeasurement:(id)a0;
- (void)recordPoseMeasurement:(id)a0;
- (void)recordEstimatorInput:(id)a0;
- (void)recordTargetEstimates:(id)a0;
- (void)recordRangeEstimate:(id)a0;
- (void)recordTargetMovingStateChanged:(BOOL)a0 atTime:(double)a1;
- (void)recordCustomData:(id)a0 forKey:(id)a1;

@end
