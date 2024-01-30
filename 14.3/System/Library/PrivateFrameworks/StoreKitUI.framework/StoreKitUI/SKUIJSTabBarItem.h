@class NSString, SKUITabBarItem, IKJSNavigationDocument, JSManagedValue, IKJSObject;

@interface SKUIJSTabBarItem : IKJSObject <SKUIJSTabBarItem> {
    JSManagedValue *_managedNavigationDocument;
    IKJSNavigationDocument *_navigationDocument;
    IKJSObject *_owner;
}

@property (readonly, nonatomic) SKUITabBarItem *tabBarItem;
@property (retain, nonatomic) NSString *badgeValue;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) IKJSNavigationDocument *navigationDocument;
@property (readonly, nonatomic) NSString *rootURL;
@property (readonly, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAppContext:(id)a0 navigationController:(id)a1 tabBarItem:(id)a2 owner:(id)a3;

@end
