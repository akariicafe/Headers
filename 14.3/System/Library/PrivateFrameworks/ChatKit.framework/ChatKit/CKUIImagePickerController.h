@class NSString;

@interface CKUIImagePickerController : UIImagePickerController <CKAdaptivePresentedControllerProtocol>

@property (nonatomic) BOOL wantsWindowedPresentation;
@property (nonatomic) BOOL preserveModalPresentationStyle;
@property (nonatomic) BOOL shouldHidePresentingWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAutorotate;

@end
