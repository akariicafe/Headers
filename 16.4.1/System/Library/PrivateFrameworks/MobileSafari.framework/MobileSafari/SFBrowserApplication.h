@class NSString, UIWindow;
@protocol SFBrowserApplicationProxy;

@interface SFBrowserApplication : UIApplication <UIApplicationDelegate>

@property (readonly, nonatomic) id<SFBrowserApplicationProxy> proxy;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
