@class NSString;

@interface WFShowInStoreActionUIKitUserInterface : WFEmbeddableActionUserInterface <SKStoreProductViewControllerDelegate, WFShowInStoreActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void)productViewControllerDidFinish:(id)a0;
- (void).cxx_destruct;
- (void)showWithiTunesObject:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;

@end
