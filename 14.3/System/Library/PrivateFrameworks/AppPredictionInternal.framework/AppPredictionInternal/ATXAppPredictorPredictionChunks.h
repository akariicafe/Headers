@class NSData;

@interface ATXAppPredictorPredictionChunks : NSObject

@property (retain, nonatomic) NSData *predictionSetChunk;
@property (retain, nonatomic) NSData *feedbackStateChunk;

- (id)chunkArray;
- (void).cxx_destruct;
- (id)joinChunks;

@end
