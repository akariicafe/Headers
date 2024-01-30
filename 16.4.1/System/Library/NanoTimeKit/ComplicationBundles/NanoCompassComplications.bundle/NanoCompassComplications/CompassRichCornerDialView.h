@class UIImageView;

@interface CompassRichCornerDialView : CompassRichDialView {
    UIImageView *_ticks;
    UIImageView *_northTick;
    UIImageView *_arrow;
    UIImageView *_dot;
    UIImageView *_north;
    UIImageView *_south;
}

- (void).cxx_destruct;
- (id)_gossamer_newNeedleView;
- (id)_gossamer_newTicksView;
- (id)_newNeedleView;
- (id)_newTicksView;
- (id)_pregossamer_newNeedleView;
- (id)_pregossamer_newTicksView;
- (id)monochromeAccentViews;
- (id)monochromeOtherViews;

@end
