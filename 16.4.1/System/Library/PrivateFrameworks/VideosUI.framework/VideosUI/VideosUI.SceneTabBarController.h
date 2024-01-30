@class NSArray;

@interface VideosUI.SceneTabBarController : NSObject <VUITabBarProtocol> {
    void /* unknown type, empty encoding */ _tabBarInfo;
    void /* unknown type, empty encoding */ previousSelectedIndex;
    void /* unknown type, empty encoding */ hasSetTabbarIndex;
}

@property (nonatomic, readonly) NSArray *tabBarItems;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) BOOL tabBarHidden;

- (void)willResignActive:(id)a0;
- (BOOL)isTabBarHidden;
- (id)init;
- (void).cxx_destruct;
- (void)willTerminate:(id)a0;
- (void)setSelectedIndexForTabBarItemIdentifier:(id)a0;
- (void)updateWithTabBarItems:(id)a0 setSelectedIndexFromDefaults:(BOOL)a1 appContext:(id)a2;

@end
