@class IKAppTabBar, NSArray, NSString, IKJSTabBarItem;

@interface IKJSTabBar : IKJSObject <NSObject, IKJSTabBar, _IKJSTabBarProxy, _IKJSTabBar>

@property (retain) NSArray *tabItems;
@property (readonly, weak, nonatomic) IKAppTabBar *appTabBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *tabs;
@property (retain, nonatomic) IKJSTabBarItem *selectedTab;

- (void).cxx_destruct;
- (id)transientTab;
- (void)setTabs:(id)a0;
- (void)_onSelectSync;
- (void)_setSelectedTabNavigationDocumentOnJSContext:(id)a0;
- (id)asPrivateIKJSTabBar;
- (id)initWithAppContext:(id)a0 appTabBar:(id)a1;
- (void)onSelect;

@end
