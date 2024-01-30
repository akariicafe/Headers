@class NSString, NSUUID, NSURL, UIDocumentInteractionController, UIViewController;
@protocol ARQLInlineService2;

@interface ASVInlineHostViewController : UIViewController <UIDocumentInteractionControllerDelegate> {
    NSUUID *_uuid;
    UIViewController *_childVC;
    NSURL *_canonicalWebPageURL;
    UIDocumentInteractionController *_documentInteractionController;
    id<ARQLInlineService2> _fullscreenService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)handleConnectionInterrupted;
- (void).cxx_destruct;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)a0;
- (id)initWithUUID:(id)a0 child:(id)a1 fullscreenInlineService:(id)a2 canonicalWebPageURL:(id)a3;
- (void)queryShowShareSheetAndNotifyDidDismiss:(BOOL)a0;
- (void)requestNewShareSheetFrame;
- (void)showShareSheet:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
