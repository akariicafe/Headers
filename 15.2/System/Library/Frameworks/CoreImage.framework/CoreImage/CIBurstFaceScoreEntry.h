@interface CIBurstFaceScoreEntry : NSObject {
    float sumScores;
    float sumSqScores;
}

@property float maxScore;
@property float minScore;
@property int numScores;

- (void)addScore:(float)a0;
- (float)computeAverage;
- (float)computeStandardDeviation;
- (id)initWithScore:(float)a0;

@end
