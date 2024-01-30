@interface VUITitleSortDescriptor : NSSortDescriptor

+ (id /* block */)descendingTitleSortComparatorWithKey:(id)a0;
+ (id /* block */)ascendingTitleSortComparatorWithKey:(id)a0;

- (long long)compareObject:(id)a0 toObject:(id)a1;

@end
