@class UIView;

@interface PUCloudSharedBackdropView : UIView {
    UIView *_backdropView;
    BOOL _isMask;
}

@property (nonatomic) BOOL hasRoundedCorners;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 asMask:(BOOL)a1;

@end
