@class UIColor, UIFont, NSDictionary, NSMutableDictionary;
@protocol _UITextAttributeDefaults;

@interface _UICascadingTextStorage : NSConcreteTextStorage {
    NSMutableDictionary *_defaultAttributes;
}

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double shadowBlur;
@property (copy, nonatomic) NSDictionary *defaultAttributes;
@property (nonatomic) long long defaultBaseWritingDirection;
@property (retain, nonatomic, setter=_setDefaults:) id<_UITextAttributeDefaults> _defaults;

+ (id)defaultFont;

- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (BOOL)_shouldSetOriginalFontAttribute;
- (long long)_ui_resolvedTextAlignment;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)_setShadow:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)_defaultAttributes;
- (void).cxx_destruct;
- (id)init;
- (id)_shadow;
- (void)_restoreOriginalFontAttribute;
- (id)initWithDefaults:(id)a0;

@end
