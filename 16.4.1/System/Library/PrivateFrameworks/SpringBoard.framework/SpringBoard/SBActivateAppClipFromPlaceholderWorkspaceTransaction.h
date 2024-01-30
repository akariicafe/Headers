@class NSString, SBRotateScenesWorkspaceTransaction;

@interface SBActivateAppClipFromPlaceholderWorkspaceTransaction : SBAppToAppWorkspaceTransaction <BSTransactionObserver> {
    SBRotateScenesWorkspaceTransaction *_rotateScenesTransaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)_concurrentOverlayDismissalOptions;
- (void)_begin;
- (void)transactionDidComplete:(id)a0;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void).cxx_destruct;

@end
