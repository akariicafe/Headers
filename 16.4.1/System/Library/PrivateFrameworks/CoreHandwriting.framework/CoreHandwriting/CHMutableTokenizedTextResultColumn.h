@class NSArray;

@interface CHMutableTokenizedTextResultColumn : CHTokenizedTextResultColumn

@property (copy, nonatomic) NSArray *tokenRows;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_mutableTokenRows;
- (long long)addTokenRowWithTokens:(id)a0;
- (id)initWithTokenRows:(id)a0;
- (void)removeTokenRowAtIndex:(long long)a0;
- (void)setTokenRowWithTokens:(id)a0 atIndex:(long long)a1;
- (void)setTokenRows:(id)a0;
- (void)sortTokenRows;

@end
