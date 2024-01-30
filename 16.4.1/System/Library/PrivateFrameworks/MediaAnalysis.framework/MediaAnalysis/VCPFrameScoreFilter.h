@interface VCPFrameScoreFilter : NSObject {
    int _numFilterTabs;
    float *_scoreArray;
    float _distanceVariance;
    float _diffVariance;
    int _numOfScores;
}

- (void)dealloc;
- (id)initWithFilterTabs:(int)a0 distanceVariance:(float)a1 diffVariance:(float)a2;
- (float)processFrameScore:(float)a0 validScore:(BOOL)a1;

@end
