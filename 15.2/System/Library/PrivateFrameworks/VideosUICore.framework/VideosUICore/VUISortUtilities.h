@interface VUISortUtilities : NSObject

+ (id /* block */)titleSortComparatorWithAscending:(BOOL)a0;
+ (id /* block */)ascendingTitleSortComparator;
+ (id /* block */)ascendingDateSortComparatorWithBlock:(id /* block */)a0;
+ (id /* block */)descendingTitleSortComparator;
+ (long long)comparisonResultForObject1:(id)a0 object2:(id)a1 withComparators:(id)a2;
+ (id /* block */)descendingDateSortComparatorWithBlock:(id /* block */)a0;

@end
