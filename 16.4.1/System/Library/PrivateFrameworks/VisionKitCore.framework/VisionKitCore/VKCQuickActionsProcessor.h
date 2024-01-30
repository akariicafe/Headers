@interface VKCQuickActionsProcessor : NSObject

+ (id)configureQuickActionForTuple:(id)a0 unfilteredTextElements:(id)a1;
+ (id)dedupeQuickActions:(id)a0;
+ (void)quickActionsFromElements:(id)a0 unfilteredElements:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (long long)sortOrderForElement:(id)a0;
+ (id)sortQuickActions:(id)a0;

@end
