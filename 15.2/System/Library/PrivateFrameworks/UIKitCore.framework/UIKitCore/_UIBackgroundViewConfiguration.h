@class UIColor, UIVisualEffect, NSString, UIImage, UIView;

@interface _UIBackgroundViewConfiguration : NSObject <_UIBackgroundConfigurationInternal, NSCopying, NSSecureCoding> {
    struct { unsigned char hasCustomizedCustomView : 1; unsigned char hasCustomizedCornerRadius : 1; unsigned char hasCustomizedBackgroundInsets : 1; unsigned char hasCustomizedEdgesAddingLayoutMarginsToBackgroundInsets : 1; unsigned char hasCustomizedBackgroundColorOrMode : 1; unsigned char hasCustomizedVisualEffect : 1; unsigned char hasCustomizedStrokeColorOrMode : 1; unsigned char hasCustomizedStrokeWidth : 1; unsigned char hasCustomizedStrokeOutset : 1; } _configurationFlags;
    UIView *_customView;
    unsigned long long _edgesAddingLayoutMarginsToBackgroundInsets;
    long long _backgroundColorMode;
    UIColor *_backgroundColor;
    UIVisualEffect *_visualEffect;
    long long _strokeColorMode;
    UIColor *_strokeColor;
    double _strokeWidth;
    double _strokeOutset;
    long long _defaultStyle;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _backgroundInsets;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIView *customView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } backgroundInsets;
@property (nonatomic) unsigned long long edgesAddingLayoutMarginsToBackgroundInsets;
@property (nonatomic) long long backgroundColorMode;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIVisualEffect *visualEffect;
@property (nonatomic) long long strokeColorMode;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (nonatomic) double strokeOutset;
@property (readonly, nonatomic) BOOL isTintBackgroundColor;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long imageContentMode;
@property (nonatomic, getter=_maskedCorners, setter=_setMaskedCorners:) unsigned long long maskedCorners;
@property (nonatomic, setter=_setCornerRadius:) double _cornerRadius;
@property (nonatomic, setter=_setShadowType:) long long _shadowType;
@property (readonly, nonatomic, getter=_hasBackgroundColor) BOOL hasBackgroundColor;
@property (readonly, nonatomic, getter=_hasStroke) BOOL hasStroke;
@property (readonly, nonatomic, getter=_hasBackgroundFill) BOOL hasBackgroundFill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupedListCellConfiguration;
+ (id)plainListHeaderFooterConfiguration;
+ (id)defaultGroupedListHeaderFooterConfigurationForState:(unsigned long long)a0;
+ (id)defaultOutlineParentCellConfigurationForState:(unsigned long long)a0;
+ (id)defaultGroupedListCellConfigurationForState:(unsigned long long)a0;
+ (id)defaultPlainListCellConfigurationForState:(unsigned long long)a0;
+ (id)defaultOutlineCellConfigurationForState:(unsigned long long)a0;
+ (id)outlineCellConfiguration;
+ (id)defaultPlainListHeaderFooterConfigurationForState:(unsigned long long)a0;
+ (id)insetGroupedListCellConfiguration;
+ (id)insetGroupedListHeaderFooterConfiguration;
+ (id)outlineRootParentCellConfiguration;
+ (id)defaultInsetGroupedListCellConfigurationForState:(unsigned long long)a0;
+ (id)groupedListHeaderFooterConfiguration;
+ (id)plainListCellConfiguration;
+ (id)defaultInsetGroupedListHeaderFooterConfigurationForState:(unsigned long long)a0;

- (id)resolvedBackgroundColorForTintColor:(id)a0;
- (id)_updatedConfigurationForState:(id)a0;
- (BOOL)_backgroundFillIsEqual:(id)a0 withTintColor:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)updatedConfigurationForState:(unsigned long long)a0;
- (id)resolvedStrokeColorForTintColor:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isEqualToInternalConfigurationQuick:(id)a0;
- (id)updatedConfigurationForState:(unsigned long long)a0 traitCollection:(id)a1;

@end
