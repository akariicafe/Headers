@interface CIBurstFaceScoreEntry : NSObject {
    float sumScores;
    float sumSqScores;
}

@property float maxScore;
@property float minScore;
@property int numScores;

- (float)computeAverage;
- (float)computeStandardDeviation;
- (id)initWithScore:(float)a0;
- (void)addScore:(float)a0;

@end
