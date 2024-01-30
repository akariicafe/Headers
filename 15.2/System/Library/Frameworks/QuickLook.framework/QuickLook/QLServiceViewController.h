@class NSUUID, UIViewController;

@interface QLServiceViewController : UIViewController {
    BOOL _isAccessoryView;
}

@property (readonly) NSUUID *uuid;
@property (readonly, weak) UIViewController *mainViewController;

+ (id)_getServiceWithUUID:(id)a0;
+ (id)_serviceViewControllers;

- (void).cxx_destruct;
- (id)init;
- (void)invalidateService;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(id /* block */)a0;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)a0;
- (void)_registerServiceViewController;

@end
