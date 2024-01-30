@class NSIndexSet, NSArray, SFUnifiedBarItem;

@interface SFUnifiedTabBarItemArrangement : NSObject

@property (readonly, nonatomic) long long activeItemSquishState;
@property (readonly, nonatomic) BOOL revealsSquishedActiveItem;
@property (readonly, copy, nonatomic) NSIndexSet *allItemIndexes;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) SFUnifiedBarItem *activeItem;
@property (readonly, nonatomic) unsigned long long activeItemIndex;
@property (readonly, nonatomic) BOOL activeItemIsExpanded;
@property (readonly, nonatomic) SFUnifiedBarItem *standaloneActiveItem;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqualToArrangement:(id)a0;
- (void)determineActiveItemSquishStateIfNeeded:(BOOL)a0;
- (id)arrangementWithActiveItem:(id)a0;
- (id)arrangementWithActiveItemIsExpanded:(BOOL)a0;
- (id)arrangementWithActiveItemSquishState:(long long)a0;
- (id)initWithItems:(id)a0 activeItem:(id)a1;
- (id)initWithItems:(id)a0 activeItem:(id)a1 activeItemIsExpanded:(BOOL)a2;
- (id)_initWithItems:(id)a0 activeItem:(id)a1 activeItemIsExpanded:(BOOL)a2 standaloneActiveItem:(id)a3;
- (id)initWithItem:(id)a0 activeItemIsExpanded:(BOOL)a1;
- (id)initWithItems:(id)a0 standaloneActiveItem:(id)a1;

@end
