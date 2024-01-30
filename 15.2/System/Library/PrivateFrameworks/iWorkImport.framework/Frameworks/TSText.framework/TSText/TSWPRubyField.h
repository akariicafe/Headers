@class NSString;

@interface TSWPRubyField : TSWPSmartField

@property (copy, nonatomic) NSString *rubyText;
@property (readonly, nonatomic) NSString *baseText;
@property (readonly, nonatomic) int baseTextScript;

- (BOOL)allowsEditing;
- (void).cxx_destruct;
- (id)text;
- (id)copyWithContext:(id)a0;
- (unsigned long long)attributeArrayKind;
- (int)styleAttributeArrayKind;
- (BOOL)canCopy:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithContext:(id)a0 rubyText:(id)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned short)smartFieldKind;
- (BOOL)supportsDeepCopyForUndo;

@end
