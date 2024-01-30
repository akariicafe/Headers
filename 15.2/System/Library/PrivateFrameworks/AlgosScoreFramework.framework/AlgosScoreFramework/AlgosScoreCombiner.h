@interface AlgosScoreCombiner : NSObject {
    void *combinerData;
}

@property (nonatomic) int debug;

+ (id)combiner;

- (void)clearScores;
- (id)init;
- (void)dealloc;
- (void)addScore:(double)a0 weight:(double)a1 type:(id)a2 label:(id)a3;
- (id)scoreScores:(id)a0;
- (double)signedMeanSquaredDeviation;

@end
