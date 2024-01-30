@class NSArray, UICollectionView, NSString, UICollectionViewFlowLayout;

@interface UIKBRecentInputsView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegate> {
    BOOL _verticalLayout;
}

@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *recentInputStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)displayLayer:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)setVerticalLayout:(BOOL)a0;
- (unsigned long long)focusableVariantCount;
- (void)refreshSelectedRecent;
- (id)selectedRecentInputString;
- (void)setupCollectionView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2;
- (void)scrollViewDidChangeContentSize:(id)a0;
- (void)dealloc;
- (void)setRecentInputs:(id)a0;

@end
