@class NSString;

@interface QLPreviewCollectionHostContext : NSExtensionContext <QLPreviewCollectionServiceProtocol, QLPreviewCollectionHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)setNotificationCenter:(id)a0;
- (void)setIsContentManaged:(BOOL)a0;
- (void)hostApplicationDidBecomeActive;
- (void)actionSheetDidDismiss;
- (void)documentMenuActionWillBegin;
- (void)hostApplicationDidEnterBackground:(BOOL)a0;
- (void)hostSceneWillDeactivate;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(id /* block */)a0;
- (void)requestLockForCurrentItem;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)setAllowInteractiveTransitions:(BOOL)a0;
- (void)notifyStateRestorationUserInfo:(id)a0;
- (id)_protocolService;
- (id)_protocolServiceWithErrorHandler:(id /* block */)a0;
- (id)_synchronousProtocolServiceWithErrorHandler:(id /* block */)a0;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)a0;
- (void)configureWithNumberOfItems:(long long)a0 currentPreviewItemIndex:(unsigned long long)a1 itemProvider:(id)a2 stateManager:(id)a3;
- (void)getNetworkObserverWithCompletionBlock:(id /* block */)a0;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(id /* block */)a0;
- (void)hostViewControlerTransitionToState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)invalidateService;
- (void)keyCommandWasPerformed:(id)a0;
- (void)keyCommandsWithCompletionHandler:(id /* block */)a0;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)a0;
- (void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)a0;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(id /* block */)a0;
- (void)saveCurrentPreviewEditsSynchronously:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)saveIntoPhotoLibraryMediaWithURLWrapper:(id)a0 previewItemType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)setCurrentPreviewItemIndex:(long long)a0 animated:(BOOL)a1;
- (void)setLoadingString:(id)a0;
- (void)setPreviewItemDisplayState:(id)a0 onItemAtIndex:(unsigned long long)a1;
- (void)setScreenEdgePanWidth:(double)a0;
- (void)shouldDisplayLockActivityWithCompletionHandler:(id /* block */)a0;
- (void)startTransitionWithSourceViewProvider:(id)a0 transitionController:(id)a1 presenting:(BOOL)a2 useInteractiveTransition:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)tearDownTransition:(BOOL)a0;
- (void)toolbarButtonPressedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)toolbarButtonsForTraitCollection:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
