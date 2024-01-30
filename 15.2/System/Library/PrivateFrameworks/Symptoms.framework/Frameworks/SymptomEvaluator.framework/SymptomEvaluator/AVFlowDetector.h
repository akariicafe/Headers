@interface AVFlowDetector : NSObject

- (int)setConfiguration:(id)a0;
- (id)getState:(BOOL)a0;
- (int)possibleAVFlowScore:(id)a0 result:(struct AVFlowDetectionResult { int x0; double x1; id x2; } *)a1;

@end
