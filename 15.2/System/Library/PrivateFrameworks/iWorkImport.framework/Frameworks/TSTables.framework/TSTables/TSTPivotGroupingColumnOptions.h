@interface TSTPivotGroupingColumnOptions : NSObject

@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } sortingAggregateRuleUid;
@property (readonly, nonatomic) BOOL hideTotals;
@property (readonly, nonatomic) BOOL repeatLabels;
@property (readonly, nonatomic) BOOL sortByGrandTotal;
@property (readonly, nonatomic) BOOL sortDescending;
@property (readonly, nonatomic) BOOL isNotEmpty;

+ (id)emptyOptions;

- (id)initWithFlags:(long long)a0 sortingAggregateRuleUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;

@end
