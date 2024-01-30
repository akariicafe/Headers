@interface CNUIUserActionItemComparator : NSObject

+ (id /* block */)comparatorWithActionItemGrouping;
+ (id /* block */)comparatorWithPreferredLabelsFirst;
+ (id /* block */)comparatorWithAlphabeticalOrderByLabel;
+ (id /* block */)comparatorWithAlphabeticalOrderByTargetHandle;
+ (id)scoreForUserAction:(id)a0;

@end
