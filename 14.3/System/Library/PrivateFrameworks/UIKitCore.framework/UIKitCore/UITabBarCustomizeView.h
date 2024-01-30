@class UISnapshotView, UITabBar, NSArray, UITabBarItemProxy, UINavigationBar, UITabBarItem, UIImageView, NSMutableArray, UILabel;

@interface UITabBarCustomizeView : UIView {
    UITabBar *_tabBar;
    NSMutableArray *_proxies;
    NSMutableArray *_fixedItems;
    UITabBarItemProxy *_draggingProxy;
    UITabBarItem *_draggingItem;
    UISnapshotView *_dragImage;
    UIImageView *_replacementGlow;
    UITabBarItem *_replaceItem;
    UILabel *_titleLabel;
    struct CGPoint { double x; double y; } _startPoint;
    long long _itemsInRowCount;
    double _gridOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _firstItemRect;
    UITabBarItem *_selectedBeforeItem;
    BOOL _isBeingDismissed;
}

@property (retain, nonatomic) NSArray *availableItems;
@property (retain, nonatomic) UINavigationBar *navigationBar;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)setTabBar:(id)a0 currentItems:(id)a1 availableItems:(id)a2;
- (long long)_barMetrics;
- (void)layoutSubviews;
- (void)adjustDragImageWithTouches:(id)a0 withEvent:(id)a1;
- (id)titleLabelFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)updateProxiesSelection;
- (void)tintTabBarItemsForEdit:(BOOL)a0;
- (id)itemInTabBarWithTouches:(id)a0 withEvent:(id)a1;
- (void)tabBarTouchesEnded:(id)a0 withEvent:(id)a1;
- (void)setIsBeingDismissed;
- (void)tabBarTouchesBegan:(id)a0 withEvent:(id)a1;
- (void)tabBarTouchesMoved:(id)a0 withEvent:(id)a1;
- (void)tabBarTouchesCancelled:(id)a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
