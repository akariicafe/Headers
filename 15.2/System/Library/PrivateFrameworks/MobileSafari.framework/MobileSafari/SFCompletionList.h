@interface SFCompletionList : NSObject

+ (void)resetSearchParameters;
+ (void)setSearchParameter:(id)a0 toValue:(id)a1;
+ (void)resultsForQuery:(id)a0 completion:(id /* block */)a1;

@end
