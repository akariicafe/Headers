@interface WFContentLibraryFiltering : NSObject

+ (void)getItemsMatchingQuery:(id)a0 withInput:(id)a1 compoundPredicate:(id)a2 resultHandler:(id /* block */)a3;
+ (void)getItemsMatchingQuery:(id)a0 withInput:(id)a1 resultHandler:(id /* block */)a2;
+ (void)performCustomFilteringUsingContentPredicates:(id)a0 compoundPredicateType:(unsigned long long)a1 forQuery:(id)a2 withInput:(id)a3 resultHandler:(id /* block */)a4;
+ (void)performFallbackFilteringWithItems:(id)a0 withContentPredicates:(id)a1 compoundPredicateType:(unsigned long long)a2 originalQuery:(id)a3 resultHandler:(id /* block */)a4;

@end
