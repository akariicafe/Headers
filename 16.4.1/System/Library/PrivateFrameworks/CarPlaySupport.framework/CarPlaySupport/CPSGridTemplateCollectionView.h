@class NSArray, NSString;

@interface CPSGridTemplateCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) NSArray *gridButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_linearFocusMovementSequences;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 gridButtons:(id)a1;

@end
