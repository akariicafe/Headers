@class UITabBarButton, UITabBarItem;

@interface UITabBarItemProxy : NSObject {
    UITabBarItem *_item;
    UITabBarButton *_view;
}

- (id)view;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)item;
- (id)initWithItem:(id)a0 inTabBar:(id)a1;

@end
