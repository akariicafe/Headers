@class NSString;

@interface MiroContentEditorNavigationController : UINavigationController <UIAdaptivePresentationControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void)awakeFromNib;
- (long long)preferredUserInterfaceStyle;

@end
