@class UIColor;

@interface GameCenterUI.AvatarView : UIView {
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ arcadeBadgeView;
    void /* unknown type, empty encoding */ messagesBadgeView;
    void /* unknown type, empty encoding */ hasShadow;
    void /* unknown type, empty encoding */ isArcadeSubscriber;
    void /* unknown type, empty encoding */ showMessagesBadge;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } jet_focusedFrame;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
