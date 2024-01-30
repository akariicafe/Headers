@class PKSharedCredentialsGroupController, NSString, PKSubcredentialMessageComposeViewController, PKHeroCardExplainationHeaderView, PKAppletSubcredentialSharingRequest;
@protocol PKAppletSubcredentialSharingExplanationViewControllerDelegate;

@interface PKAppletSubcredentialSharingExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKSubcredentialMessageComposeViewControllerDelegate, PKViewControllerPreflightable> {
    PKHeroCardExplainationHeaderView *_heroCardView;
    PKSharedCredentialsGroupController *_groupController;
    PKAppletSubcredentialSharingRequest *_sharingRequest;
    id<PKAppletSubcredentialSharingExplanationViewControllerDelegate> _delegate;
    BOOL _isSharing;
}

@property (retain, nonatomic) PKSubcredentialMessageComposeViewController *messageComposeViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)messageComposeViewControllerDidFinishWithResult:(BOOL)a0;
- (void)_openMessagesToPresentAction;
- (id)initWithSharedCredentialsGroupController:(id)a0 delegate:(id)a1 SharingRequest:(id)a2;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)viewDidLoad;

@end
