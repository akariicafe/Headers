@class NSString;

@interface _UIDocumentPickerNavigationBridgeController : UINavigationController <_UIDocumentPickerExtensionViewController> {
    BOOL _hasSetInitialNavigationItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (id)hostingViewController;
- (void)_setTintColor:(id)a0;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)_locationsMenu:(id)a0;
- (void)_setPickerMode:(unsigned long long)a0;
- (void)_documentPickerDidDismiss;
- (void)_doneButton:(id)a0;
- (void)_prepareWithExtensionInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setPickableTypes:(id)a0;
- (void)_setUploadURLWrapper:(id)a0;
- (void)_updateNavigationItem;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;

@end
