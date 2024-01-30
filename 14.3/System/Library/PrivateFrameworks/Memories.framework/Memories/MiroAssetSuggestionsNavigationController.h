@class NSString;

@interface MiroAssetSuggestionsNavigationController : UINavigationController <UIAdaptivePresentationControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredUserInterfaceStyle;
- (void)awakeFromNib;
- (BOOL)presentationControllerShouldDismiss:(id)a0;

@end
