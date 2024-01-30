@class UIView;

@interface CompassRichDialView : NanoCompassBaseRichView {
    UIView *_ticksView;
    UIView *_needleView;
}

@property (readonly, nonatomic) UIView *ticksView;
@property (readonly, nonatomic) UIView *needleView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)_newTicksView;
- (id)_newNeedleView;

@end
