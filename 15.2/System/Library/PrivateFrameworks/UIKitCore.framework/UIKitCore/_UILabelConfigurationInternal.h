@class UIColor;

@interface _UILabelConfigurationInternal : NSObject <NSCopying, NSSecureCoding> {
    double _screenScale;
    double _lineSpacing;
    UIColor *_disabledTextColor;
    struct { unsigned char autotracksTextToFit : 1; unsigned char shouldDrawUnderlinesLikeWebKit : 1; unsigned char textAlignmentFollowsWritingDirection : 1; unsigned char textAlignmentMirrored : 1; unsigned char usesSimpleTextEffects : 1; unsigned char overallWritingDirectionFollowsLayoutDirection : 1; unsigned char hyphenationFactorIgnoredIfURLsDetected : 1; unsigned char supportMultilineShrinkToFit : 1; unsigned char baselineAdjustment : 2; unsigned char hasCustomized_autotracksTextToFit : 1; unsigned char hasCustomized_shouldDrawUnderlinesLikeWebKit : 1; unsigned char hasCustomized_textAlignmentFollowsWritingDirection : 1; unsigned char hasCustomized_textAlignmentMirrored : 1; unsigned char hasCustomized_usesSimpleTextEffects : 1; unsigned char hasCustomized_cuiCatalog : 1; unsigned char hasCustomized_cuiStyleEffectConfiguration : 1; unsigned char hasCustomized_screenScale : 1; unsigned char hasCustomized_lineSpacing : 1; unsigned char hasCustomized_hyphenationFactorIgnoredIfURLsDetected : 1; unsigned char hasCustomized_baselineAdjustment : 1; unsigned char hasCustomized_overallWritingDirectionFollowsLayoutDirection : 1; unsigned char hasCustomized_supportMultilineShrinkToFit : 1; unsigned char hasCustomized_disabledTextColor : 1; } _configurationFlags;
    BOOL __hasResolvedLabelTextAlignmentMirrored;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
