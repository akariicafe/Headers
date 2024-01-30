@interface SGTokenizerML : NSObject

+ (id)tokenize:(id)a0;
+ (void)enumerateTokensInString:(id)a0 block:(id /* block */)a1;
+ (void)enumerateTokensInString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 block:(id /* block */)a2;

@end
