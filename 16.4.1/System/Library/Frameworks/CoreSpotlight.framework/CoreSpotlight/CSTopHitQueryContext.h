@interface CSTopHitQueryContext : CSUserQueryContext

@property (nonatomic) long long maxItemCount;

+ (id)topHitQueryContextWithCurrentSuggestion:(id)a0;
+ (id)topHitQueryContext;

@end
