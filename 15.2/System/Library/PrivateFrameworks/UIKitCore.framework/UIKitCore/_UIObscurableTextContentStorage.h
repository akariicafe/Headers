@class _UICascadingTextStorage, NSAttributedString;

@interface _UIObscurableTextContentStorage : NSTextContentStorage {
    _UICascadingTextStorage *_cascadingTextStorage;
    NSAttributedString *_obscuredAttributedString;
}

@property (readonly, nonatomic) NSAttributedString *obscuredAttributedString;
@property (nonatomic, getter=isObscured) BOOL obscured;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } unobscuredRange;

- (id)attributedString;
- (void)processEditingForTextStorage:(id)a0 edited:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3 invalidatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (void).cxx_destruct;
- (void)_invalidateObscuredAttributedString;
- (void)setTextStorage:(id)a0;
- (void)_validateUnobscuredRange;
- (id)initWithTextStorage:(id)a0;

@end
