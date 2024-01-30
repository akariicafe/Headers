@class NSArray, UIStepper, UICollectionView, UILabel, UISlider, NSString;

@interface AKFontSizePicker : UIControl <UICollectionViewDataSource, UICollectionViewDelegate>

@property (nonatomic) long long style;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIStepper *stepper;
@property (retain, nonatomic) UISlider *slider;
@property (retain, nonatomic) UICollectionView *sizeList;
@property (retain, nonatomic) NSArray *sizeListValues;
@property (nonatomic) double value;
@property (copy, nonatomic) id /* block */ willBeginTrackingUpdates;
@property (copy, nonatomic) id /* block */ didEndTrackingUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_sliderTouchUp:(id)a0;
- (void)_sliderTouchDown:(id)a0;
- (void)_decreaseSize:(id)a0;
- (void)_handleValueChanged:(id)a0;
- (void)_increaseSize:(id)a0;
- (struct CGSize { double x0; double x1; })_itemSizeInContainer;
- (void)_selectSizeInList;

@end
