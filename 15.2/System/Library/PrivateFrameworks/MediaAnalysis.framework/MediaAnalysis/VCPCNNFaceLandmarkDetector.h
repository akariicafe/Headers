@class NSMutableArray;

@interface VCPCNNFaceLandmarkDetector : NSObject {
    NSMutableArray *_landmarks;
}

+ (id)detector;

- (id)landmarks;
- (void).cxx_destruct;
- (float *)getInputBuffer;
- (int)computeLandmarks:(float *)a0;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withFaceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
