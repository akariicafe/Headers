@class NTKDateComplicationLabel;

@interface NTKUtilityDateComplicationView : NTKUtilityComplicationView {
    NTKDateComplicationLabel *_label;
}

@property (readonly, nonatomic) unsigned long long dateStyle;

- (void)setForegroundColor:(id)a0;
- (void)setFont:(id)a0;
- (id)foregroundColor;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_invalidateLabelSize;
- (id)accentColor;
- (void)setDateComplicationText:(id)a0 withDayRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forDateStyle:(unsigned long long)a2;
- (void)setAccentColor:(id)a0;
- (double)_widthThatFits;

@end
