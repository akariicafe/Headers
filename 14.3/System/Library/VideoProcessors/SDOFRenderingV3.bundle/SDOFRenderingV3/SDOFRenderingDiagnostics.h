@class NSMutableDictionary;

@interface SDOFRenderingDiagnostics : NSObject {
    NSMutableDictionary *_diagDict;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearDiagnostics;
- (id)createDiagnosticsDictionary;
- (id)dictFromFaces:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; } *)a0 numFaces:(int)a1;
- (id)dictFromFace:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })a0;
- (void)addDetectedFaces:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; } *)a0 numFaces:(int)a1;

@end
