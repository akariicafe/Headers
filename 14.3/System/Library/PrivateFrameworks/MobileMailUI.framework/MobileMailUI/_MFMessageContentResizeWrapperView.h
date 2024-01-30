@class UIView;

@interface _MFMessageContentResizeWrapperView : UIView

@property (retain, nonatomic) UIView *snapshotView;
@property (nonatomic) double snapshotViewYOrigin;

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 snapshotView:(id)a1;

@end
