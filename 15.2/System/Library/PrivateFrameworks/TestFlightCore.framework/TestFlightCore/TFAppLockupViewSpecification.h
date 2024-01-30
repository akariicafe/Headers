@class UIColor, UIFont;

@interface TFAppLockupViewSpecification : NSObject

@property (readonly, nonatomic) UIColor *titleTextColor;
@property (readonly, nonatomic) UIColor *subtitleTextColor;
@property (readonly, nonatomic) UIColor *iconPlaceholderColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconSize;
@property (readonly, nonatomic) double paddingBetweenIconAndText;
@property (readonly, nonatomic) double titleLabelBaselineToFirstSubtitleLabelBaseline;
@property (readonly, nonatomic) double firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;
@property (readonly, nonatomic) UIFont *titleLabelFont;
@property (readonly, nonatomic) UIFont *subtitleLabelFont;

- (id)initWithTraitCollection:(id)a0;
- (void).cxx_destruct;
- (id)_createTitleLabelFontWithTraitCollection:(id)a0;
- (id)_createSubtitleLabelFontWithTraitCollection:(id)a0;
- (id)_titleFontStyle;
- (id)_subtitleFontStyle;

@end
