@class UIView;

@interface CompassRichDialView : NanoCompassBaseRichView {
    UIView *_ticksView;
    UIView *_needleView;
}

@property (readonly, nonatomic) UIView *ticksView;
@property (readonly, nonatomic) UIView *needleView;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (id)_newNeedleView;
- (id)_newTicksView;

@end
