@interface SiriUIContentLabel : UILabel

+ (id)label;
+ (id)labelWithSubtitleFont;
+ (id)labelWithHeaderFont;
+ (id)labelWithLightWeightRegularFont;
+ (id)labelWithLightWeightFontSize:(double)a0;
+ (id)labelWithThinWeightFontSize:(double)a0;
+ (id)labelWithThinWeightRegularFont;
+ (id)labelWithMediumWeightRegularFont;
+ (id)labelWithThinWeightSubtextFont;
+ (id)labelWithLightWeightSubtextFont;
+ (id)labelWithMediumWeightSubtextFont;
+ (id)labelWithBodyFont;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
