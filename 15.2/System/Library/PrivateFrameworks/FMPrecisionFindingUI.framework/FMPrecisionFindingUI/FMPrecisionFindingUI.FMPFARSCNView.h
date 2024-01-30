@class NSString;

@interface FMPrecisionFindingUI.FMPFARSCNView : ARSCNView {
    void /* unknown type, empty encoding */ innerIsolationQueue;
    void /* unknown type, empty encoding */ internalIsolationQueue;
}

@property (nonatomic, readonly) BOOL drawsCameraImage;
@property (nonatomic, readonly) NSString *description;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_drawAtTime:(double)a0;

@end
