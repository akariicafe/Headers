@interface TIContextTokens : NSObject

@property (nonatomic) void *context;

- (const struct TITokenID { unsigned int x0; unsigned int x1; } *)begin;
- (void)appendToken:(struct TITokenID { unsigned int x0; unsigned int x1; })a0 string:(id)a1;
- (void *)lmContext;
- (void)popBack;
- (id)initWithContext:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a0 contextLength:(unsigned long long)a1 contextStringTokens:(id)a2;
- (void)dealloc;
- (id)init;
- (unsigned long long)size;
- (void)clear;

@end
