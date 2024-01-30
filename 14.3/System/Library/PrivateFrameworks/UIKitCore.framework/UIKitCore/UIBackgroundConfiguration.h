@class UIColor, UIVisualEffect, NSString, UIView;

@interface UIBackgroundConfiguration : NSObject <_UIBackgroundConfigurationInternal, NSCopying, NSSecureCoding> {
    struct { unsigned char hasCustomizedCustomView : 1; unsigned char hasCustomizedCornerRadius : 1; unsigned char hasCustomizedBackgroundInsets : 1; unsigned char hasCustomizedEdgesAddingLayoutMarginsToBackgroundInsets : 1; unsigned char hasCustomizedBackgroundColor : 1; unsigned char hasCustomizedBackgroundColorTransformer : 1; unsigned char hasCustomizedVisualEffect : 1; unsigned char hasCustomizedStrokeColor : 1; unsigned char hasCustomizedStrokeColorTransformer : 1; unsigned char hasCustomizedStrokeWidth : 1; unsigned char hasCustomizedStrokeOutset : 1; } _configurationFlags;
    UIView *_customView;
    unsigned long long _edgesAddingLayoutMarginsToBackgroundInsets;
    UIColor *_backgroundColor;
    id /* block */ _backgroundColorTransformer;
    UIVisualEffect *_visualEffect;
    UIColor *_strokeColor;
    id /* block */ _strokeColorTransformer;
    double _strokeWidth;
    double _strokeOutset;
    long long _defaultStyle;
    long long _backgroundColorTransformerIdentifier;
    long long _strokeColorTransformerIdentifier;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _backgroundInsets;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIView *customView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } backgroundInsets;
@property (nonatomic) unsigned long long edgesAddingLayoutMarginsToBackgroundInsets;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) id /* block */ backgroundColorTransformer;
@property (copy, nonatomic) UIVisualEffect *visualEffect;
@property (retain, nonatomic) UIColor *strokeColor;
@property (copy, nonatomic) id /* block */ strokeColorTransformer;
@property (nonatomic) double strokeWidth;
@property (nonatomic) double strokeOutset;
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

+ (id)listAccompaniedSidebarCellConfiguration;
+ (id)listGroupedHeaderFooterConfiguration;
+ (id)listPlainHeaderFooterConfiguration;
+ (id)listSidebarHeaderConfiguration;
+ (id)listGroupedCellConfiguration;
+ (id)listSidebarCellConfiguration;
+ (id)listPlainCellConfiguration;
+ (id)clearConfiguration;

- (id)updatedConfigurationForState:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)resolvedStrokeColorForTintColor:(id)a0;
- (id)_updatedConfigurationForState:(id)a0;
- (BOOL)_backgroundFillIsEqual:(id)a0 withTintColor:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)resolvedBackgroundColorForTintColor:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
