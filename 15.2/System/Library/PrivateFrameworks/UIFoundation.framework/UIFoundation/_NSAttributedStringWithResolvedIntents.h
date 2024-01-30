@class NSAttributedString;

@interface _NSAttributedStringWithResolvedIntents : NSAttributedString {
    NSAttributedString *_string;
    Class _resolver;
}

- (id)string;
- (id)initWithUnresolvedString:(id)a0 resolver:(Class)a1;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;

@end
