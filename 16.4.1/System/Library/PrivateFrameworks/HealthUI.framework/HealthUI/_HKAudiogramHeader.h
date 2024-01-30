@class UILabel;

@interface _HKAudiogramHeader : UIStackView

@property (readonly, nonatomic) UILabel *headerTitleView;
@property (readonly, nonatomic) UILabel *headerValueView;
@property (readonly, nonatomic) UILabel *headerDateView;

- (id)_titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_dateLabel;
- (id)_valueLabel;

@end
