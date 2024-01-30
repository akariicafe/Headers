@class NSArray;
@protocol HFIconDescriptor, HUIconPickerViewControllerDelegate;

@interface HUIconPickerViewController : UICollectionViewController

@property (retain, nonatomic) id<HFIconDescriptor> selectedIconDescriptor;
@property (readonly, nonatomic) NSArray *iconDescriptors;
@property (weak, nonatomic) id<HUIconPickerViewControllerDelegate> delegate;

+ (id)sceneIconDescriptors;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_done:(id)a0;
- (void).cxx_destruct;
- (void)_cancel:(id)a0;
- (id)initWithIconDescriptors:(id)a0 selectedIconDescriptor:(id)a1 delegate:(id)a2;

@end
