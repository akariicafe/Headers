@class NSString, SiriUICardSectionView, INUIRemoteViewController;

@interface SiriUISnippetExtensionCardSectionViewController : CRKCardSectionViewController <INUIRemoteViewControllerDelegate> {
    INUIRemoteViewController *_remoteViewController;
    id _touchDeliveryPolicyAssertion;
}

@property (retain, nonatomic) SiriUICardSectionView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardSectionClasses;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_loadCardSectionView;
- (BOOL)_shouldAttemptToConnectToRemoteViewController;
- (void)_cancelTouchesIfNecessary;
- (void)_resumeTouchesIfNecessary;
- (void)remoteViewControllerServiceDidTerminate:(id)a0;
- (void)_attemptToConnectToRemoteViewControllerWithInteraction:(id)a0 forParameters:(id)a1;
- (struct CGSize { double x0; double x1; })minimumSizeForRemoteViewController:(id)a0;
- (struct CGSize { double x0; double x1; })maximumSizeForRemoteViewController:(id)a0;

@end
