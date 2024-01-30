@class NSString, UIViewController;

@interface WFMediaPickerParameterSummaryEditor : WFModuleSummaryEditor <MPMediaPickerControllerDelegatePrivate, UIPopoverPresentationControllerDelegate>

@property (weak, nonatomic) UIViewController *presentedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (void)mediaPickerDidCancel:(id)a0;
- (void)mediaPicker:(id)a0 didPickMediaItems:(id)a1;
- (void)mediaPicker:(id)a0 didPickPlaybackArchive:(id)a1;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)beginEditingSlotWithIdentifier:(id)a0 sourceViewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;

@end
