@class CAGradientLayer, NSMutableDictionary, UICollectionView, NSString, UIView, UIButton;
@protocol WFAutocompleteAccessoryBarDelegate;

@interface WFAutocompleteAccessoryBar : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) UIButton *doneButton;
@property (weak, nonatomic) UIView *maskingView;
@property (weak, nonatomic) CAGradientLayer *maskLayer;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) NSMutableDictionary *cellWidthCache;
@property (weak, nonatomic) id<WFAutocompleteAccessoryBarDelegate> delegate;
@property (nonatomic) BOOL showsDoneButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)doneButtonPressed;
- (void)reloadItems;

@end
