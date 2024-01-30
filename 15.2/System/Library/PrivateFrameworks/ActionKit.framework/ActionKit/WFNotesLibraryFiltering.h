@interface WFNotesLibraryFiltering : WFContentLibraryANDFiltering

+ (Class)objectClass;
+ (void)performCustomFilteringUsingComparisonPredicates:(id)a0 resultHandler:(id /* block */)a1;
+ (void)getGroupNamesForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
