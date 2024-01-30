@class NSString;

@interface TSWPRubyField : TSWPSmartField

@property (copy, nonatomic) NSString *rubyText;
@property (readonly, nonatomic) NSString *baseText;
@property (readonly, nonatomic) int baseTextScript;

- (id)text;
- (void)dealloc;
- (id)copyWithContext:(id)a0;
- (int)elementKind;
- (BOOL)allowsEditing;
- (unsigned int)attributeArrayKind;
- (int)styleAttributeArrayKind;
- (BOOL)canCopy:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithContext:(id)a0 rubyText:(id)a1;

@end
