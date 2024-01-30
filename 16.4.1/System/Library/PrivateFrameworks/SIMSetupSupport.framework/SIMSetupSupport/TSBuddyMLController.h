@class RemoteUIController, NSString, NSURL, UIBarButtonItem;
@protocol TSSIMSetupFlowDelegate;

@interface TSBuddyMLController : NSObject <RemoteUIControllerDelegate> {
    BOOL _initialRequest;
    UIBarButtonItem *_cancelButton;
    RemoteUIController *_remoteUIController;
}

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)remoteUIController:(id)a0 didRemoveObjectModel:(id)a1;
- (void)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)loadRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithHostController:(id)a0;
- (void)_configureRUIController;
- (void)_userDidTapCancel;

@end
