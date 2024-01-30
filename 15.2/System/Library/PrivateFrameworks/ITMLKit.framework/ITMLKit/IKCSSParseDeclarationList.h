@interface IKCSSParseDeclarationList : IKCSSParseBlock {
    struct _NSRange { unsigned long long location; unsigned long long length; } __range;
}

- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)description;
- (id)init;

@end
