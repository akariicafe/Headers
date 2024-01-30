@class NSMutableArray;

@interface VCPCNNFaceLandmarkDetector : NSObject {
    NSMutableArray *_landmarks;
}

+ (id)detector;

- (void).cxx_destruct;
- (id)landmarks;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withFaceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (int)computeLandmarks:(float *)a0;
- (float *)getInputBuffer;

@end
