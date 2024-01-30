@class NSString, PKDataReleaseContentViewController;
@protocol PKDataReleaseViewControllerDelegate;

@interface PKDataReleaseViewController : PKPaymentAuthorizationServiceCompactNavigationContainerController <PKDataReleaseContentViewControllerDelegate> {
    id<PKDataReleaseViewControllerDelegate> _dataReleaseDelegate;
    PKDataReleaseContentViewController *_vc;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0 delegate:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)_updateExclustionRectWithButtonPresent:(BOOL)a0;
- (void)_updatePhysicalButtonWithVC:(id)a0;
- (void)dataReleaseCompletedWithError:(id)a0;
- (void)dataReleaseContentViewController:(id)a0 didAuthorizeWithExternalAuthorizationData:(id)a1 dataToRelease:(id)a2;
- (void)dataReleaseContentViewController:(id)a0 didFinishWithError:(id)a1;
- (void)dataReleaseContentViewController:(id)a0 didResolveToMerchant:(id)a1;
- (void)dataReleaseContentViewControllerDidChangePhysicalButtonState:(id)a0;

@end
