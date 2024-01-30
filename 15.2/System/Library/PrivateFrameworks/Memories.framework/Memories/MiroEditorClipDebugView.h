@class NSString, UICollectionView, UILabel, MiroColorSelectionController;

@interface MiroEditorClipDebugView : UIView <UICollectionViewDataSource>

@property (retain, nonatomic) MiroColorSelectionController *colorSelectionController;
@property (weak, nonatomic) UICollectionView *colorSwatchCollectionView;
@property (weak, nonatomic) UILabel *label1;
@property (weak, nonatomic) UILabel *label2;
@property (weak, nonatomic) UILabel *label3;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_configureCell:(id)a0 withColor:(id)a1 overrideBorderColor:(id)a2 emphasize:(BOOL)a3 label:(id)a4;
- (id)_labelTextIfSafeDominantColor:(id)a0;
- (id)_labelTextIfSafeAccentColor:(id)a0;
- (void)setupWithClipProvider:(id)a0;

@end
