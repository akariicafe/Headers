@class UIColor;

@interface GameCenterUI.AvatarView : UIView {
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ hasShadow;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } jet_focusedFrame;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
