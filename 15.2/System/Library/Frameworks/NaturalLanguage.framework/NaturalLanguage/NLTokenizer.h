@class NSString;

@interface NLTokenizer : NSObject {
    long long _unit;
    NSString *_string;
    NSString *_language;
    struct __NLTokenizer { } *_tokenizer;
}

@property (readonly, nonatomic) long long unit;
@property (retain, nonatomic) NSString *string;

- (void)setLanguage:(id)a0;
- (id)initWithUnit:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })tokenRangeAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)language;
- (void)enumerateTokensInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)tokensForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_wordCharacterSet;
- (const struct { struct { long long x0; long long x1; } x0; unsigned long long x1; } *)_tokenAtIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })tokenRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
