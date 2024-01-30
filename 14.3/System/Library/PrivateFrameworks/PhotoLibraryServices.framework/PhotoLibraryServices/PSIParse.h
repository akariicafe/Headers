@class NSArray, PSIDateFilter, NSString;

@interface PSIParse : NSObject {
    NSArray *_tokens;
    NSString *_string;
}

@property (readonly, nonatomic) unsigned long long numberOfTokens;
@property (copy, nonatomic) PSIDateFilter *dateFilter;
@property (readonly, nonatomic) NSArray *datedTokens;

- (void).cxx_destruct;
- (id)initWithToken:(id)a0;
- (void)enumerateTokensUsingBlock:(id /* block */)a0;
- (id)parseByReplacingTokensInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withTokens:(id)a1;
- (id)tokenAtIndex:(unsigned long long)a0;
- (id)parseByReplacingTokenAtIndex:(unsigned long long)a0 withToken:(id)a1;
- (id)description;
- (id)initWithTokens:(id)a0 fromString:(id)a1;
- (id)descriptionWithToken:(id)a0;

@end
