@class UIColor, UIFont, _UISearchAtomView;

@interface _UISearchAtomViewVisualStyle : NSObject <_UIVisualStyleProviding>

@property (readonly, weak, nonatomic) _UISearchAtomView *searchAtomView;
@property (readonly, nonatomic) double disabledAlpha;
@property (readonly, nonatomic) double maximumFallbackWidth;
@property (readonly, nonatomic) double maximumAtomWidthFraction;
@property (readonly, nonatomic) double minimumConstrainedAtomWidth;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) double contentHorizontalPadding;
@property (readonly, nonatomic) double textVerticalPadding;
@property (readonly, nonatomic) double imageTextSpacing;
@property (readonly, nonatomic) double minimumTextConstrastRatio;
@property (readonly, nonatomic) UIColor *defaultTextAndImageColor;
@property (readonly, nonatomic) UIColor *defaultSelectedTextAndImageColor;
@property (readonly, nonatomic) UIColor *textContrastFallbackColor;
@property (readonly, nonatomic) UIColor *defaultAtomBackgroundColor;
@property (readonly, nonatomic) UIFont *defaultFont;

- (void).cxx_destruct;
- (id)initWithInstance:(id)a0;

@end
