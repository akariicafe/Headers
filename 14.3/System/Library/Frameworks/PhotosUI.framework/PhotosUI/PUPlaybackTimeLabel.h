@class UILabel, UIView;

@interface PUPlaybackTimeLabel : UIView

@property (readonly, nonatomic) UIView *_backgroundView;
@property (readonly, nonatomic) UILabel *_label;
@property (nonatomic, setter=_setNeedsUpdateBackground:) BOOL _needsUpdateBackground;
@property (nonatomic, setter=_setNeedsUpdateLabel:) BOOL _needsUpdateLabel;
@property (nonatomic) long long format;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentPlaybackTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } playbackDuration;

- (void)_invalidateBackground;
- (void).cxx_destruct;
- (void)_updateBackgroundIfNeeded;
- (void)_setNeedsUpdate;
- (BOOL)_needsUpdate;
- (void)_updateIfNeeded;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidateLabel;
- (void)_updateLabelIfNeeded;
- (struct CGSize { double x0; double x1; })_maximumLabelSizeWithDuration:(double)a0;
- (id)_labelTextWithFormat:(long long)a0 elapsedInterval:(double)a1 remainingInterval:(double)a2;
- (id)_stringFromTimeInterval:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
