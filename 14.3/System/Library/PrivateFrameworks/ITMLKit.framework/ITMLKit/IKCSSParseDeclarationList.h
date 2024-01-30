@interface IKCSSParseDeclarationList : IKCSSParseBlock {
    struct _NSRange { unsigned long long location; unsigned long long length; } __range;
}

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)init;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)description;

@end
