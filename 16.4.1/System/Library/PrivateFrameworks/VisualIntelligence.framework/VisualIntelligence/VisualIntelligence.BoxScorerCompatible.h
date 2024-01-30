@interface VisualIntelligence.BoxScorerCompatible : NSObject {
    void /* unknown type, empty encoding */ boxScorer;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithGranularity:(long long)a0 xMean:(double)a1 yMean:(double)a2 std:(double)a3;
- (double)scoreWithXTopLeft:(double)a0 yTopLeft:(double)a1 width:(double)a2 height:(double)a3;

@end
