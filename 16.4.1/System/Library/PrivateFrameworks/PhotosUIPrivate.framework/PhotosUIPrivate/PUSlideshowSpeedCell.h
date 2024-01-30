@class UIImageView, UISlider, NSArray;
@protocol PUSlideshowSpeedCellDelegate;

@interface PUSlideshowSpeedCell : UITableViewCell {
    UIImageView *_slowerGlyphImageView;
    UIImageView *_fasterGlyphImageView;
    UISlider *_slider;
    NSArray *_speedConstraints;
}

@property (nonatomic) double stepDuration;
@property (weak, nonatomic) id<PUSlideshowSpeedCellDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateConstraints;
- (void)_updateView;
- (void).cxx_destruct;
- (void)_stepDurationValueChanged:(id)a0;

@end
