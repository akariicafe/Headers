@class NSString, UIFont, UIColor;

@interface SBIconLabelImageParameters : NSObject <NSCopying, NSMutableCopying> {
    BOOL _recalculateHash;
    BOOL _colorspaceGrayscale;
    BOOL _colorspaceGrayscaleSet;
    NSString *_iconLocation;
    unsigned long long _hash;
}

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maxSize;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) BOOL canTruncate;
@property (readonly, nonatomic) BOOL canTighten;
@property (readonly, nonatomic) BOOL containsEmoji;
@property (readonly, nonatomic) long long legibilityStyle;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic, getter=isAccessibilityReduceTransparencyEnabled) BOOL accessibilityReduceTransparencyEnabled;
@property (readonly, copy, nonatomic) NSString *contentSizeCategory;
@property (readonly, nonatomic) UIColor *focusHighlightColor;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } fontLanguageInsets;
@property (readonly, nonatomic, getter=isColorspaceGrayscale) BOOL colorspaceGrayscale;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithParameters:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_noteNeedsHashRecalculation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
