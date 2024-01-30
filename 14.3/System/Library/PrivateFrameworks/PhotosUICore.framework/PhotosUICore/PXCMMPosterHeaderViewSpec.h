@class UIFont;

@interface PXCMMPosterHeaderViewSpec : NSObject

@property (readonly, nonatomic) long long titleFontTextStyle;
@property (readonly, nonatomic) unsigned int titleFontDescriptorSymbolicTraits;
@property (readonly, nonatomic) double titleBaselineOffset;
@property (readonly, nonatomic) long long subtitleFontTextStyle;
@property (readonly, nonatomic) unsigned int subtitleFontDescriptorSymbolicTraits;
@property (readonly, nonatomic) double subtitleBaselineOffset;
@property (readonly, nonatomic) long long topGradientFontTextStyle;
@property (readonly, nonatomic) unsigned int topGradientFontDescriptorSymbolicTraits;
@property (readonly, nonatomic) double topGradientBaselineOffset;
@property (readonly, nonatomic) BOOL canShowStatus;
@property (readonly, nonatomic) long long statusFontTextStyle;
@property (readonly, nonatomic) unsigned int statusFontDescriptorSymbolicTraits;
@property (readonly, nonatomic) double statusBaselineOffset;
@property (readonly, nonatomic) long long bottomGradientFontTextStyle;
@property (readonly, nonatomic) unsigned int bottomGradientFontDescriptorSymbolicTraits;
@property (readonly, nonatomic) double bottomGradientBaselineOffset;
@property (readonly, nonatomic) double scaledTitleBaselineOffset;
@property (readonly, nonatomic) double scaledSubtitleBaselineOffset;
@property (readonly, nonatomic) double scaledTopGradientBaselineOffset;
@property (readonly, nonatomic) double scaledStatusBaselineOffset;
@property (readonly, nonatomic) double scaledBottomGradientBaselineOffset;
@property (readonly, nonatomic) UIFont *preferredTitleFont;
@property (readonly, nonatomic) UIFont *preferredSubtitleFont;
@property (readonly, nonatomic) UIFont *preferredStatusFont;

- (id)init;
- (id)initWithPresentationStyle:(long long)a0;

@end
