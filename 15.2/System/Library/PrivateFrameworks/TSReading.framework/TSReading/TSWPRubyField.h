@class NSString;

@interface TSWPRubyField : TSWPSmartField

@property (copy, nonatomic) NSString *rubyText;
@property (readonly, nonatomic) NSString *baseText;
@property (readonly, nonatomic) int baseTextScript;

- (BOOL)allowsEditing;
- (int)elementKind;
- (id)text;
- (void)dealloc;
- (id)copyWithContext:(id)a0;
- (unsigned int)attributeArrayKind;
- (int)styleAttributeArrayKind;
- (BOOL)canCopy:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithContext:(id)a0 rubyText:(id)a1;

@end
