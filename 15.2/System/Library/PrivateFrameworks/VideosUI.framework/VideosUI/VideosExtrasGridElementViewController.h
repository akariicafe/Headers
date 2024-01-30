@class UIView, NSString, NSArray, _VideosExtrasGridHeaderView, _VideosExtrasShelfCollectionViewLayout, IKGridElement, UICollectionView, VideosExtrasGridViewControllerStyle;

@interface VideosExtrasGridElementViewController : VideosExtrasViewElementViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    UIView *_titleRule;
    NSArray *_titleRuleConstraints;
    NSArray *_headerViewConstraints;
    UICollectionView *_collectionView;
    _VideosExtrasShelfCollectionViewLayout *_flowLayout;
    _VideosExtrasGridHeaderView *_headerView;
}

@property (readonly) IKGridElement *viewElement;
@property (readonly, nonatomic) VideosExtrasGridViewControllerStyle *currentStyle;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) VideosExtrasGridViewControllerStyle *smallStyle;
@property (retain, nonatomic) VideosExtrasGridViewControllerStyle *mediumStyle;
@property (retain, nonatomic) VideosExtrasGridViewControllerStyle *largeStyle;
@property (retain, nonatomic) VideosExtrasGridViewControllerStyle *extraLargeStyle;
@property (retain, nonatomic) VideosExtrasGridViewControllerStyle *wideStyle;
@property (nonatomic, getter=isShelfStyle) BOOL shelfStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultCellStyle;
+ (id)_fontAttributesForTextStyle:(id)a0;
+ (id)smallGalleryStyle;
+ (id)smallDetailStyle;
+ (id)mediumDetailStyle;
+ (id)smallStackGridStyle;
+ (id)mediumStackGridStyle;
+ (id)largeStackGridStyle;
+ (id)keyPathsForValuesAffectingContentScrollView;
+ (id)wideGalleryStyle;
+ (id)mediumGalleryStyle;
+ (id)largeGalleryStyle;
+ (id)extraLargeGalleryStyle;
+ (id)wideDetailStyle;
+ (id)largeDetailStyle;
+ (id)extraLargeDetailStyle;
+ (id)wideStackGridStyle;
+ (id)extraLargeStackGridStyle;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)viewWillAppear:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)contentScrollView;
- (void)loadView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setViewElement:(id)a0;
- (void)_dynamicTypeDidChange;
- (void)_prepareLayout;
- (id)initWithViewElement:(id)a0;
- (BOOL)_hasDescriptionText;
- (BOOL)_sectionIndexIsDescriptionSection:(long long)a0;
- (id)_sectionElementForIndex:(unsigned long long)a0;
- (id)_cellStyleForSection:(id)a0;
- (id)_lockupForIndexPath:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_sectionInsetsForSection:(id)a0;
- (double)_cellSpacingForSection:(id)a0;
- (id)_narrowStyle;
- (id)preferredLayoutGuide;
- (long long)preferredLayoutAttribute;

@end
