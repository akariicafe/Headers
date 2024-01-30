@class NSMutableDictionary;

@interface FigSmartcamDiagnostics : NSObject {
    NSMutableDictionary *_metadata;
}

- (id)metadata;
- (void).cxx_destruct;
- (id)init;
- (BOOL)addMotionStats:(struct { float x0[2]; int x1[2]; int x2; int x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; BOOL x5; BOOL x6; })a0;
- (void)addSceneConfidences:(id)a0;
- (void)addPAMDecisionPreliminary:(id)a0;
- (BOOL)addClassifierVersionMajor:(unsigned short)a0 minor:(unsigned short)a1 patch:(unsigned short)a2;

@end
