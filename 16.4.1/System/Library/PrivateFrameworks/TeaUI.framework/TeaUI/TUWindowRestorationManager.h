@class NSString, NSObject;
@protocol TUWindowRestorationManagerDelegate;

@interface TUWindowRestorationManager : NSObject

@property (weak, nonatomic) id<TUWindowRestorationManagerDelegate> delegate;
@property (readonly, nonatomic) NSObject *appKitWindow;
@property (readonly, nonatomic) NSString *windowFrameName;

- (id)application;
- (void).cxx_destruct;
- (void)didFinishRestoringWindows;
- (id)initWithPluginBundleName:(id)a0 windowFrameName:(id)a1 delegate:(id)a2;
- (void)setFrameName:(id)a0 forWindow:(id)a1 changeFrame:(BOOL)a2;
- (void)windowSceneDidBecomeVisible;

@end
