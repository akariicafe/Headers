@class MFPGraphicsState;

@interface MFPGraphicsContainer : NSObject {
    MFPGraphicsState *mParentGraphicsState;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mContainerTransform;
}

- (void).cxx_destruct;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })containerTransform;
- (id)initWithParentGraphicsState:(id)a0 containerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (id)parentGraphicsState;

@end
