@interface FCForYouCatchUpCondition : NSObject

@property (nonatomic) long long contentTypes;
@property (copy, nonatomic) id /* block */ testBlock;

+ (id)caughtUpWithContentTypes:(long long)a0 orPassingTestBlock:(id /* block */)a1;
+ (id)caughtUpWithContentTypes:(long long)a0;

- (void).cxx_destruct;
- (BOOL)isSatisfiedWithCatchUpOperation:(id)a0;

@end
