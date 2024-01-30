@interface WFRemindersLibraryFiltering : WFContentLibraryFiltering

+ (void)getItemsMatchingQuery:(id)a0 withInput:(id)a1 resultHandler:(id /* block */)a2;
+ (void)performCustomFilteringUsingContentPredicates:(id)a0 compoundPredicateType:(unsigned long long)a1 forQuery:(id)a2 withInput:(id)a3 resultHandler:(id /* block */)a4;

@end
