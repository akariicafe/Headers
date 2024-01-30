@class NSData;

@interface ATXAppPredictorPredictionChunks : NSObject

@property (retain, nonatomic) NSData *predictionSetChunk;
@property (retain, nonatomic) NSData *feedbackStateChunk;

- (id)chunkArray;
- (id)init;
- (id)joinChunks;
- (id)initWithPredictionSetChunk:(id)a0 feedbackStateChunk:(id)a1;
- (void).cxx_destruct;

@end
