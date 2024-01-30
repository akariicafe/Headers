@class UIImageView, UIImage, UILabel, CAShapeLayer;

@interface HURecordingButton : UIControl

@property (retain, nonatomic) UIImage *currentButtonImage;
@property (retain, nonatomic) UIImage *nextButtonImage;
@property (retain, nonatomic) UIImageView *currentButtonImageView;
@property (retain, nonatomic) UIImageView *nextButtonImageView;
@property (retain, nonatomic) UILabel *currentButtonLabel;
@property (retain, nonatomic) CAShapeLayer *stopButtonStrokeLayer;
@property (nonatomic) unsigned long long currentRecordingState;

- (void)_updateHighlight;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 state:(unsigned long long)a1 image:(id)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 state:(unsigned long long)a1 title:(id)a2;
- (void)setText:(id)a0 forState:(unsigned long long)a1 animated:(BOOL)a2;

@end
