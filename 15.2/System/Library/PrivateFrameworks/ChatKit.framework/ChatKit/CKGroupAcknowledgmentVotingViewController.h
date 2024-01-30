@class NSString, NSArray, UITapGestureRecognizer, CKGroupAcknowledgmentVotingLayout, CKAggregateAcknowledgmentChatItem, UIButton, _CKAcknowledgmentVoteCountView, UICollectionView, CKAcknowledgmentVotingViewAnimator;

@interface CKGroupAcknowledgmentVotingViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CKAcknowledgmentVotingViewAnimatorDelegate>

@property (retain, nonatomic) NSArray *tallies;
@property (retain, nonatomic) CKAggregateAcknowledgmentChatItem *chatItem;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CKGroupAcknowledgmentVotingLayout *layout;
@property (retain, nonatomic) CKAcknowledgmentVotingViewAnimator *animator;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIButton *collapseButton;
@property (retain, nonatomic) _CKAcknowledgmentVoteCountView *currentlyExpandedVoteCountView;
@property (copy, nonatomic) NSArray *sortedAnimatorModelItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)tapGestureRecognized:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)_setupTallies;
- (void)_handleCollapseButton:(id)a0;
- (id)_contactNameSupplementaryViewAtIndexPath:(id)a0;
- (id)_ackIconSupplementaryViewAtIndexPath:(id)a0;
- (id)_voteCountSupplementaryViewAtIndexPath:(id)a0;
- (void)_collapseCollectionView;
- (void)_animateToLayout:(unsigned long long)a0 aroundSection:(long long)a1;
- (void)_layoutCurrentlyExpandedVoteCountView;
- (id)initWithMessagePartChatItem:(id)a0;
- (void)_expandCollectionViewExpandedViewAroundSection:(long long)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withGestureRecognizer:(id)a1;
- (void)acknowledgmentVotingViewAnimatorDidFinishAnimation:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)_layoutCollapseButton;

@end
