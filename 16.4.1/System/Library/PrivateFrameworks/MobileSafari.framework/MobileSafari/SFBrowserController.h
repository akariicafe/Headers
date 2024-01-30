@class NSString;
@protocol SFBrowserControllerProxy;

@interface SFBrowserController : UIResponder <UISceneDelegate>

@property (weak, nonatomic) id<SFBrowserControllerProxy> proxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
