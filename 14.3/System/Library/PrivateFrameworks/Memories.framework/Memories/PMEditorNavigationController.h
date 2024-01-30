@class NSString;

@interface PMEditorNavigationController : UINavigationController <UIPresentationControllerDelegatePrivate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredUserInterfaceStyle;
- (void)awakeFromNib;
- (void)presentationControllerWillDismiss:(id)a0;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (BOOL)presentationControllerShouldDismiss:(id)a0;

@end
