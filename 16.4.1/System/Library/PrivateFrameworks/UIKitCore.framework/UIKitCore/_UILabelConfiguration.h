@class UIFont, NSString, NSShadow, NSAttributedString, _UILabelContent, NSDictionary, _UILabelConfigurationInternal, UIColor;

@interface _UILabelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    _UILabelContent *_content;
    long long _semanticContentAttribute;
    long long _textAlignment;
    long long _lineBreakMode;
    unsigned long long _lineBreakStrategy;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    UIColor *_textBackgroundColor;
    UIColor *_backgroundColor;
    NSShadow *_shadow;
    long long _numberOfLines;
    double _minimumScaleFactor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    double _preferredMaxLayoutWidth;
    double _displayScale;
    _UILabelConfigurationInternal *_internal;
    struct { unsigned char adjustsFontSizeToFitWidth : 1; unsigned char allowsDefaultTighteningForTruncation : 1; unsigned char adjustsFontForContentSizeCategory : 1; unsigned char isEnabled : 1; unsigned char isHighlighted : 1; unsigned char hasCustomized_text : 1; unsigned char hasCustomized_attributedText : 1; unsigned char hasCustomized_defaultAttributes : 1; unsigned char hasCustomized_font : 1; unsigned char hasCustomized_textColor : 1; unsigned char hasCustomized_highlightedTextColor : 1; unsigned char hasCustomized_textBackgroundColor : 1; unsigned char hasCustomized_shadow : 1; unsigned char hasCustomized_backgroundColor : 1; unsigned char hasCustomized_textAlignment : 1; unsigned char hasCustomized_lineBreakMode : 1; unsigned char hasCustomized_lineBreakStrategy : 1; unsigned char hasCustomized_numberOfLines : 1; unsigned char hasCustomized_adjustsFontSizeToFitWidth : 1; unsigned char hasCustomized_minimumScaleFactor : 1; unsigned char hasCustomized_allowsDefaultTighteningForTruncation : 1; unsigned char hasCustomized_adjustsFontForContentSizeCategory : 1; unsigned char hasCustomized_bounds : 1; unsigned char hasCustomized_preferredMaxLayoutWidth : 1; unsigned char hasCustomized_semanticContentAttribute : 1; unsigned char hasCustomized_isEnabled : 1; unsigned char hasCustomized_isHighlighted : 1; unsigned char hasCustomized_internal : 1; } _configurationFlags;
    BOOL __hasResolvedDefaultAttributes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic, setter=_setDefaultAttributes:) NSDictionary *_defaultAttributes;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (retain, nonatomic) UIColor *textBackgroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSShadow *shadow;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) unsigned long long lineBreakStrategy;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) long long semanticContentAttribute;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

+ (id)new;

- (id)initWithTraitCollection:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_initEmpty;

@end
