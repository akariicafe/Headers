@class NSArray, UICollectionViewDiffableDataSource, _InvertibleFlowLayout, NSString, UILongPressGestureRecognizer;
@protocol TUIEmojiSearchResultsCollectionViewControllerDelegate;

@interface TUIEmojiSearchResultsCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {
    unsigned long long _animationBeginOffset;
    unsigned long long _lastAnimatedCellCount;
    BOOL _animatingCellUpdates;
    NSArray *_placeholderIdentifiers;
}

@property (nonatomic) BOOL displayingVerbatimResults;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) _InvertibleFlowLayout *flowLayout;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (weak, nonatomic) id<TUIEmojiSearchResultsCollectionViewControllerDelegate> delegate;
@property (nonatomic, getter=isCellHighlightFrozen) BOOL cellHighlightFrozen;
@property (retain, nonatomic) NSArray *displayedEmojis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emojiTextAttributes;

- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_userPreferredEmojiStringVariantForToken:(id)a0;
- (id)configuredEmojiCollectionViewCellForCollectionView:(id)a0 atIndexPath:(id)a1 forEmojiString:(id)a2;
- (void)setDisplayedEmojis:(id)a0 verbatimSkinTones:(BOOL)a1 animated:(BOOL)a2;
- (void)resetScrollPositionAnimated:(BOOL)a0;
- (BOOL)_isSelectableEmojiTokenAtIndexPath:(id)a0;
- (void)_didRecognizeLongPressGesture:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;

@end
