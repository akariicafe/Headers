@class UIImageView, UILabel, UIView;

@interface NCInsetGroupedButton : UIControl {
    UIView *_backgroundView;
    UIView *_cornersView;
    UIImageView *_arrowImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (id)buttonWithTitle:(id)a0 top:(BOOL)a1;

- (void)setSelected:(BOOL)a0;
- (void)setSubtitleText:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_initWithTitle:(id)a0 top:(BOOL)a1;

@end
