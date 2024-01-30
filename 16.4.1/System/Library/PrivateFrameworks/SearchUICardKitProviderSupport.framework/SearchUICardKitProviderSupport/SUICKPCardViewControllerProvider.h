@class NSString, NSMutableDictionary, NSMutableArray;

@interface SUICKPCardViewControllerProvider : NSObject <CRKCardSectionViewControllerDelegate, SearchUIFeedbackDelegate, CRKCardViewControllerProviding, SearchUICardViewDelegate> {
    NSMutableDictionary *_cardsByCardSectionIdentifiers;
    NSMutableDictionary *_cardViewControllersByCardIdentifiers;
    NSMutableArray *_pendingDismissalCommands;
    long long _preferredPunchoutIndex;
    struct CGSize { double width; double height; } _preferredContentSize;
}

@property (retain, nonatomic) NSMutableDictionary *feedbackDelegateDemultiplexersByCardIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cardViewController:(id)a0 preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a1 animated:(BOOL)a2;
- (id)init;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0;
- (id)customInteractionsForCardSection:(id)a0;
- (id)customLayerForCardSection:(id)a0;
- (id)customViewControllerForCardSection:(id)a0;
- (void)cardSectionViewWillAppearForCardSection:(id)a0 withAppearanceFeedback:(id)a1;
- (struct CGSize { double x0; double x1; })boundingSizeForCardSectionViewController:(id)a0;
- (void)cardSectionView:(id)a0 willProcessEngagementFeedback:(id)a1;
- (void)cardSectionViewDidAppearForCardSection:(id)a0 withAppearanceFeedback:(id)a1;
- (void)cardSectionViewDidDisappearForCardSection:(id)a0 withDisappearanceFeedback:(id)a1;
- (void)userDidEngageCardSection:(id)a0 withEngagementFeedback:(id)a1;
- (void)cardSectionViewController:(id)a0 didSelectPreferredPunchoutIndex:(long long)a1;
- (id)cardViewControllerForCard:(id)a0;
- (unsigned long long)displayPriorityForCard:(id)a0;
- (BOOL)performCommand:(id)a0 forCardSectionViewController:(id)a1;
- (long long)preferredPunchoutIndexForCardSectionViewController:(id)a0;
- (void)presentViewController:(id)a0 forCardSectionViewController:(id)a1;
- (void)presentation:(id)a0 didApplyCardSectionViewSource:(id)a1 toCardViewController:(id)a2;
- (BOOL)_askDelegateToPerformReferentialCommand:(id)a0 forCardSection:(id)a1;
- (id)_cardViewControllerForCardSection:(id)a0;
- (id)_createCardViewControllerForCard:(id)a0;
- (id)extractLinkID:(id)a0;

@end
