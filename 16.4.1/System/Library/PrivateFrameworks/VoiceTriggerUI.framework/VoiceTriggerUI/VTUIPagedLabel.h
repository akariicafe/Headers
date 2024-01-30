@class UIScrollView, UILabel, UIView;

@interface VTUIPagedLabel : UIView {
    UIScrollView *_scrollView;
    UIView *_instructionContainerLeft;
    UIView *_instructionContainerRight;
    UILabel *_instructionLabelLeft;
    UILabel *_instructionLabelRight;
    BOOL _isProximity;
    long long _enrollmentStyle;
}

- (void)setText:(id)a0;
- (void)clear;
- (void).cxx_destruct;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isProximity:(BOOL)a1 forEnrollmentStyle:(long long)a2;
- (void)slideInText:(id)a0 afterDelay:(double)a1 completion:(id /* block */)a2;

@end
