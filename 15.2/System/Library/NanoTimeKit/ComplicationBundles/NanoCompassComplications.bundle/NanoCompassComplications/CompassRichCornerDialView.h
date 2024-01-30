@class UIImageView;

@interface CompassRichCornerDialView : CompassRichDialView {
    UIImageView *_ticks;
    UIImageView *_dot;
    UIImageView *_north;
    UIImageView *_south;
}

- (void).cxx_destruct;
- (id)monochromeAccentViews;
- (id)monochromeOtherViews;
- (id)_newTicksView;
- (id)_newNeedleView;

@end
