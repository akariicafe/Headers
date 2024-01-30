@class NSTimeZone, NSString, UIColor, UIFont, UILabel, NSDate;

@interface MTUIDateLabel : UIView {
    NSTimeZone *_timeZone;
}

@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) UILabel *dateLabel;
@property (copy, nonatomic) NSString *dateLabelText;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *timeDesignatorFont;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)viewForLastBaselineLayout;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (void)_updateLabel;
- (void).cxx_destruct;
- (id)_fontInfoForBaselineSpacing;
- (BOOL)_hasFontInfoForVerticalBaselineSpacing;
- (void)_updateDateString;
- (void)_updateTextString;

@end
