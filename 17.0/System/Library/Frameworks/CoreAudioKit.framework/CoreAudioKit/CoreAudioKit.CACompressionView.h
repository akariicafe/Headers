@class NSArray;

@interface CoreAudioKit.CACompressionView : CoreAudioKit.CAAUGraphView {
    void /* unknown type, empty encoding */ diagonalLayer;
    void /* unknown type, empty encoding */ curveFill;
    void /* unknown type, empty encoding */ compressionLine;
    void /* unknown type, empty encoding */ expansionFill;
    void /* unknown type, empty encoding */ compressionFill;
    void /* unknown type, empty encoding */ compressionTriangle;
    void /* unknown type, empty encoding */ accessibilityFormatter;
    void /* unknown type, empty encoding */ controlList;
    void /* unknown type, empty encoding */ activeGuides;
    void /* unknown type, empty encoding */ paramCache;
    void /* unknown type, empty encoding */ activeControl;
    void /* unknown type, empty encoding */ accessibileElements;
    void /* unknown type, empty encoding */ dataSource;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;

@end
