@class UIColor, NSArray, UICollectionView, NSString;

@interface AKColorPaletteView : UIControl <UICollectionViewDataSource, UICollectionViewDelegate, AKInkIsUpdatable, AKUserInterfaceItem, AKColorChooserUserInterfaceItem>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *colors;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long scrollDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_indexPathOfColor:(id)a0;
- (struct CGSize { double x0; double x1; })_itemSizeInContainer;
- (void)scrollToCurrentColor;
- (BOOL)wantsInkUpdate;

@end
