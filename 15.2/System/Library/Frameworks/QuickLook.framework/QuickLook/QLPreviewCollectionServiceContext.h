@protocol QLPreviewItemProvider;

@interface QLPreviewCollectionServiceContext : NSExtensionContext <QLPreviewCollectionServiceProtocol> {
    id<QLPreviewItemProvider> _itemProvider;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)setNotificationCenter:(id)a0;
- (void)setIsContentManaged:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateTransitionWithProgress:(double)a0;
- (void)shouldDisplayLockActivityWithCompletionHandler:(id /* block */)a0;
- (void)requestLockForCurrentItem;
- (void)setAllowInteractiveTransitions:(BOOL)a0;
- (void)saveCurrentPreviewEditsSynchronously:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)hostApplicationDidEnterBackground:(BOOL)a0;
- (void)hostApplicationDidBecomeActive;
- (void)invalidateService;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(id /* block */)a0;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)a0;
- (void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)a0;
- (void)setLoadingString:(id)a0;
- (void)configureWithNumberOfItems:(long long)a0 currentPreviewItemIndex:(unsigned long long)a1 itemProvider:(id)a2 stateManager:(id)a3;
- (void)hostViewControlerTransitionToState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(id /* block */)a0;
- (void)toolbarButtonsForTraitCollection:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getCurrentPreviewActivityUserInfoWithCompletionHandler:(id /* block */)a0;
- (void)keyCommandsWithCompletionHandler:(id /* block */)a0;
- (void)tearDownTransition:(BOOL)a0;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)setCurrentPreviewItemIndex:(long long)a0 animated:(BOOL)a1;
- (void)keyCommandWasPerformed:(id)a0;
- (id)_previewCollection;
- (void)completeTransition:(BOOL)a0 withDuration:(double)a1;
- (void)startTransitionWithSourceViewProvider:(id)a0 transitionController:(id)a1 presenting:(BOOL)a2 useInteractiveTransition:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)actionSheetDidDismiss;
- (void)getNetworkObserverWithCompletionBlock:(id /* block */)a0;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)a0;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(id /* block */)a0;
- (void)toolbarButtonPressedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)notifyStateRestorationUserInfo:(id)a0;
- (id)_protocolHost;

@end
