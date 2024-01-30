@class NSString, UIViewController;

@interface VideosExtrasJSITunesStore : IKJSITunesStore <SKStoreProductViewControllerDelegatePrivate, VideosExtrasJSITunesStore, IKJSITunesStore>

@property (weak, nonatomic) UIViewController *formPresentationViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadStoreURL:(id)a0 playOnLaunch:(id)a1;

@end
