@class NSString, _UIBackdropView, UIView;

@interface SKUIScrollingTabBarBackgroundView : UIView {
    _UIBackdropView *_backdropView;
    UIView *_bottomHairlineView;
    UIView *_topHairlineView;
}

@property (copy, nonatomic) NSString *backdropBarGroupName;
@property (nonatomic) BOOL showsBackdrop;
@property (nonatomic) BOOL showsBottomHairline;
@property (nonatomic) BOOL showsTopHairline;
@property (nonatomic) BOOL usesOpaqueColorForTopHairline;

- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateTopHairlineColor;

@end
