@interface NLTokenIDConverter : NSObject

- (void)enumerateTokenIDsForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withBlock:(id /* block */)a2;
- (id)stringForTokenID:(unsigned int)a0;
- (id)stringForTokenIDs:(const unsigned int *)a0 length:(unsigned long long)a1;
- (unsigned int)tokenIDForString:(id)a0;

@end
