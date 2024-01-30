@interface SUICFauxFlamesView : UIView {
    long long _style;
    struct { double imageHeight; double imageWidth; int frameCount; int fps; BOOL color; char *fileName; } _sequenceAttributes;
}

+ (id)_frameImagesForSequence:(struct { double x0; double x1; int x2; int x3; BOOL x4; char *x5; })a0;

- (void)start:(BOOL)a0;
- (void)prewarm;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAnimating;
- (void)stop:(BOOL)a0;
- (void)setHidden:(BOOL)a0;
- (id)initWithStyle:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0 screenSize:(long long)a1;
- (void)_cleanupView;

@end
