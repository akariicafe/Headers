@class UIColor, UIImage, UIImageSymbolConfiguration;

@interface UIListContentImageProperties : NSObject <NSCopying, NSSecureCoding> {
    struct { unsigned char hasCustomizedPreferredSymbolConfiguration : 1; unsigned char hasCustomizedTintColor : 1; unsigned char hasCustomizedTintColorTransformer : 1; unsigned char hasCustomizedCornerRadius : 1; unsigned char hasCustomizedReservedLayoutSize : 1; unsigned char hasCustomizedMaximumSize : 1; unsigned char hasCustomizedAccessibilityIgnoresInvertColors : 1; unsigned char hasCustomizedStrokeColor : 1; unsigned char hasCustomizedStrokeColorTransformer : 1; unsigned char hasCustomizedStrokeWidth : 1; } _imageFlags;
    BOOL _accessibilityIgnoresInvertColors;
    UIImage *_image;
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;
    UIColor *_tintColor;
    id /* block */ _tintColorTransformer;
    double _cornerRadius;
    UIColor *_strokeColor;
    id /* block */ _strokeColorTransformer;
    double _strokeWidth;
    long long _tintColorTransformerIdentifier;
    long long _strokeColorTransformerIdentifier;
    struct CGSize { double width; double height; } _reservedLayoutSize;
    struct CGSize { double width; double height; } _maximumSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=_setStrokeColor:) UIColor *_strokeColor;
@property (copy, nonatomic, setter=_setStrokeColorTransformer:) id /* block */ _strokeColorTransformer;
@property (nonatomic, setter=_setStrokeWidth:) double _strokeWidth;
@property (copy, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (retain, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) id /* block */ tintColorTransformer;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGSize { double x0; double x1; } maximumSize;
@property (nonatomic) struct CGSize { double x0; double x1; } reservedLayoutSize;
@property (nonatomic) BOOL accessibilityIgnoresInvertColors;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)resolvedTintColorForTintColor:(id)a0;
- (id)_resolvedStrokeColorForTintColor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
