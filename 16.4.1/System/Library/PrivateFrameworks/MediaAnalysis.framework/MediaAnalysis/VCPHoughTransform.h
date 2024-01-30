@interface VCPHoughTransform : NSObject {
    float *_edgeMap;
    int _mapWidth;
    int _mapHeight;
    int *_accumulator;
    int _accWidth;
    int _accHeight;
    int _accHalfHeight;
    float _angleStep;
    BOOL _verbose;
}

- (void)dealloc;
- (int)DetectLinesWithThreshold:(int)a0 output:(id)a1;
- (void)Transform;
- (id)initWithEdgeMap:(float *)a0 mapWidth:(int)a1 mapHeight:(int)a2 angleStep:(float)a3;

@end
