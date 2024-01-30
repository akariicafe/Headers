@class NSString, UIFont, UIColor;

@interface SBIconLabelImageParameters : NSObject <NSCopying, NSMutableCopying> {
    BOOL _recalculateHash;
    BOOL _colorspaceGrayscale;
    BOOL _colorspaceGrayscaleSet;
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
@property (readonly, copy, nonatomic) NSString *iconLocation;
@property (readonly, nonatomic, getter=isColorspaceGrayscale) BOOL colorspaceGrayscale;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_noteNeedsHashRecalculation;
- (unsigned long long)hash;
- (id)initWithParameters:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
