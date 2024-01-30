@class NSString, UITapGestureRecognizer, UIImageView, _UIBackdropView, PUHorizontalCollectionViewLayout, UICollectionView, UIImpactFeedbackGenerator, NSIndexPath;
@protocol PUReviewScrubberDataSource, PUReviewScrubberDelegate;

@interface PUReviewScrubber : UIToolbar <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (readonly, nonatomic) _UIBackdropView *_backdropView;
@property (readonly, nonatomic) UIImageView *_shadowView;
@property (readonly, nonatomic) UIImageView *_arrowImageView;
@property (readonly, nonatomic) PUHorizontalCollectionViewLayout *_collectionViewLayout;
@property (readonly, nonatomic) UICollectionView *_collectionView;
@property (retain, nonatomic) NSString *cellReuseIdentifier;
@property (readonly, nonatomic) BOOL _ignoreScrollViewDidScrollUpdate;
@property (readonly, nonatomic) BOOL _performingInteractiveUpdate;
@property (readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer;
@property (readonly, nonatomic) UIImpactFeedbackGenerator *_impactFeedbackBehavior;
@property (retain, nonatomic, setter=_setIndexPathForPreviousFeedbackQuery:) NSIndexPath *_indexPathForPreviousFeedbackQuery;
@property (nonatomic) id<PUReviewScrubberDataSource> dataSource;
@property (nonatomic) id<PUReviewScrubberDelegate> scrubberDelegate;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) Class scrubberCellClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)reloadData;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_commonPUReviewScrubberInitialization;
- (void)setSelectedIndexPath:(id)a0 animated:(BOOL)a1;
- (void)toggleSelectedIndexPathAnimated:(BOOL)a0;
- (void)reloadSelectedIndexPathAnimated:(BOOL)a0;
- (void)_beginFeedbackInteraction;
- (void)_playFeedbackIfNeeded;
- (void)_endFeedbackInteraction;
- (void)_handleTapOnReviewScrubber:(id)a0;
- (void)_updateContentOffsetForSelectedIndexPathAnimated:(BOOL)a0;
- (id)indexPathUnderTickMarkInCollectionView:(id)a0 atContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateToSelectedIndexPath:(id)a0;
- (struct CGPoint { double x0; double x1; })contentOffsetForIndexPath:(id)a0 inCollectionView:(id)a1;
- (struct CGPoint { double x0; double x1; })contentOffsetForItemAtIndex:(long long)a0 ofScrollView:(id)a1;
- (void)_notifyDelegateOfScrub;
- (void)_notifyDelegateOfSelection;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_handleTapAtIndexPath:(id)a0;
- (id)_indexPathInCollectionView:(id)a0 closestToPoint:(struct CGPoint { double x0; double x1; })a1 excludingIndexPath:(id)a2;
- (void)layoutSubviews;
- (void)beginInteractiveUpdate;
- (void)finishInteractiveUpdate;
- (void)reloadIndexPath:(id)a0 animated:(BOOL)a1;
- (void)toggleIndexPath:(id)a0 animated:(BOOL)a1;
- (void)updateWithAbsoluteProgress:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)isMinibar;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)scrollViewWillBeginDragging:(id)a0;

@end
