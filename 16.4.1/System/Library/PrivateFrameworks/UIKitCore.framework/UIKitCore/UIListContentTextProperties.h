@class UIColor, UIFont, NSString, NSAttributedString;

@interface UIListContentTextProperties : NSObject <_UIListContentTextPropertiesInternal, NSCopying, NSSecureCoding> {
    struct { unsigned char hasCustomizedFont : 1; unsigned char hasCustomizedColor : 1; unsigned char hasCustomizedColorTransformer : 1; unsigned char hasCustomizedAlignment : 1; unsigned char hasCustomizedLineBreakMode : 1; unsigned char hasCustomizedNumberOfLines : 1; unsigned char hasCustomizedAdjustsFontSizeToFitWidth : 1; unsigned char hasCustomizedMinimumScaleFactor : 1; unsigned char hasCustomizedAllowsDefaultTighteningForTruncation : 1; unsigned char hasCustomizedAdjustsFontForContentSizeCategory : 1; unsigned char hasCustomizedShowsExpansionTextWhenTruncated : 1; unsigned char hasCustomizedTransform : 1; } _textFlags;
    BOOL _adjustsFontSizeToFitWidth;
    BOOL _allowsDefaultTighteningForTruncation;
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _showsExpansionTextWhenTruncated;
    NSString *_text;
    UIFont *_font;
    UIColor *_color;
    id /* block */ _colorTransformer;
    long long _alignment;
    long long _lineBreakMode;
    NSAttributedString *_attributedText;
    long long _numberOfLines;
    double _minimumScaleFactor;
    long long _transform;
    long long _colorTransformerIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *color;
@property (copy, nonatomic) id /* block */ colorTransformer;
@property (nonatomic) long long alignment;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL showsExpansionTextWhenTruncated;
@property (nonatomic) long long transform;
@property (readonly, nonatomic) long long _effectiveTextAlignment;
@property (readonly, nonatomic) BOOL _hasNonEmptyPlainTextOnly;

- (void)encodeWithCoder:(id)a0;
- (id)resolvedColor;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
