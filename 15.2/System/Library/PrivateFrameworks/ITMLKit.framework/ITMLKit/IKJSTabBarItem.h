@class IKJSTabBar, JSManagedValue, NSString, IKJSNavigationDocument;
@protocol IKAppNavigationController;

@interface IKJSTabBarItem : IKJSObject <NSObject, IKJSTabBarItem, _IKJSTabBarItemProxy, _IKJSTabBarItem>

@property (retain, nonatomic) JSManagedValue *managedNavigationDocument;
@property (retain, nonatomic) JSManagedValue *managedSelf;
@property (weak, nonatomic) IKJSTabBar *owner;
@property (readonly, weak, nonatomic) id<IKAppNavigationController> navigationControllerDelegate;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) IKJSNavigationDocument *navigationDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
