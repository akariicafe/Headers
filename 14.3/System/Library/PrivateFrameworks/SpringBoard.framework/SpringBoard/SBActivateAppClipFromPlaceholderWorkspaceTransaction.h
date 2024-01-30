@class NSString, SBRotateScenesWorkspaceTransaction;

@interface SBActivateAppClipFromPlaceholderWorkspaceTransaction : SBAppToAppWorkspaceTransaction <BSTransactionObserver> {
    SBRotateScenesWorkspaceTransaction *_rotateScenesTransaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transactionDidComplete:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_concurrentOverlayDismissalOptions;
- (void)_begin;
- (unsigned long long)_serialOverlayPreDismissalOptions;

@end
