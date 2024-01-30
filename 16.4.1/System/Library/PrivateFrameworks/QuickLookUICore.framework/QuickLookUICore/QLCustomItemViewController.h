@class QLAppearance, NSString, NSDictionary, UIView;
@protocol QLCustomItemViewControllerHost;

@interface QLCustomItemViewController : UIViewController <QLRemotePopoverTracker> {
    QLAppearance *_lastAppearance;
}

@property (weak, nonatomic) UIView *shareSheetPresentationView;
@property (retain) id<QLCustomItemViewControllerHost> hostViewControllerProxy;
@property (copy, nonatomic) NSDictionary *previewOptions;
@property (nonatomic) BOOL isShareEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFullScreen:(BOOL)a0;
- (void).cxx_destruct;
- (void)didDismissActivityViewController;
- (void)dismissPreviewController;
- (void)forwardMessageToHost:(id)a0 completionHandler:(id /* block */)a1;
- (void)getFrameWithCompletionBlock:(id /* block */)a0;
- (void)presentActivityViewControllerFromView:(id)a0;
- (void)presentActivityViewControllerFromView:(id)a0 withURL:(id)a1;
- (void)presentationModeDidChange:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;

@end
