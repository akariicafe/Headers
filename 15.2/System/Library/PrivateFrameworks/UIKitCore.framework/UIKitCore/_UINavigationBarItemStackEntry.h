@class UINavigationItem, _UINavigationBarLayout;

@interface _UINavigationBarItemStackEntry : NSObject

@property (readonly, nonatomic) UINavigationItem *item;
@property (readonly, nonatomic) _UINavigationBarLayout *activeLayout;
@property (readonly, nonatomic) _UINavigationBarLayout *inactiveLayout;
@property (nonatomic, getter=isSearchActive) BOOL searchActive;
@property (retain, nonatomic) _UINavigationBarLayout *normalLayout;
@property (retain, nonatomic) _UINavigationBarLayout *searchLayout;

+ (id)entryForItem:(id)a0 replaceExistingWithNew:(BOOL)a1;
+ (id)newEntryForItem:(id)a0;

- (void)updateStateFromCounterpart:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;

@end
