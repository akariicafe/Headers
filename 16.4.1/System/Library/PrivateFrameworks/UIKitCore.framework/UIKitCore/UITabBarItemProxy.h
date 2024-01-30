@class UITabBarButton, UITabBarItem;

@interface UITabBarItemProxy : NSObject {
    UITabBarItem *_item;
    UITabBarButton *_view;
}

- (void)setSelected:(BOOL)a0;
- (id)item;
- (id)view;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 inTabBar:(id)a1;

@end
