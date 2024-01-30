@class NSArray, NSIndexSet, SFUnifiedBarItem;

@interface SFUnifiedTabBarItemArrangement : NSObject <NSCopying>

@property (readonly, nonatomic) long long activeItemSquishState;
@property (readonly, nonatomic) BOOL revealsSquishedActiveItem;
@property (readonly, copy, nonatomic) NSArray *pinnedItems;
@property (readonly, copy, nonatomic) NSArray *unpinnedItems;
@property (readonly, nonatomic) unsigned long long pinnedItemLimit;
@property (readonly, copy, nonatomic) NSArray *overflowPinnedItems;
@property (readonly, copy, nonatomic) NSIndexSet *allItemIndexes;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) SFUnifiedBarItem *activeItem;
@property (readonly, nonatomic) unsigned long long activeItemIndex;
@property (readonly, nonatomic) BOOL activeItemIsExpanded;
@property (readonly, nonatomic) BOOL allowsScrollingPinnedItems;

- (id)resolvedArrangementWithPinnedItemLimit:(unsigned long long)a0 overflowItem:(id)a1;
- (id)_initWithItems:(id)a0 activeItem:(id)a1 activeItemIsExpanded:(BOOL)a2 allowPinning:(BOOL)a3 allowsScrollingPinnedItems:(BOOL)a4;
- (id)arrangementWithActiveItem:(id)a0;
- (void)determineActiveItemSquishStateIfNeeded:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)arrangementWithActiveItemSquishState:(long long)a0;
- (id)initWithItem:(id)a0 activeItemIsExpanded:(BOOL)a1;
- (id)arrangementWithActiveItemIsExpanded:(BOOL)a0;
- (id)initWithItems:(id)a0 activeItem:(id)a1;
- (id)init;
- (id)initWithItems:(id)a0 activeItem:(id)a1 activeItemIsExpanded:(BOOL)a2 allowsScrollingPinnedItems:(BOOL)a3;
- (void).cxx_destruct;
- (BOOL)isEqualToArrangement:(id)a0;

@end
