@class UIAlertControllerVisualStyle, NSMutableArray, UICollectionViewFlowLayout;
@protocol _UIAlertControllerTextFieldViewControllerContaining;

@interface _UIAlertControllerTextFieldViewController : UICollectionViewController {
    NSMutableArray *textFieldViews;
    BOOL _textFieldsCanBecomeFirstResponder;
    UIAlertControllerVisualStyle *_visualStyle;
    UICollectionViewFlowLayout *_collectionViewLayout;
}

@property (weak, nonatomic) id<_UIAlertControllerTextFieldViewControllerContaining> container;
@property (nonatomic) BOOL textFieldsCanBecomeFirstResponder;
@property (nonatomic) UIAlertControllerVisualStyle *visualStyle;
@property (readonly) NSMutableArray *textFields;
@property (nonatomic, getter=isHidden) BOOL hidden;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)resignFirstResponder;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updateTextFieldStyle;
- (double)_bottomMarginForTextFields;
- (void)_updatePreferredContentSize;
- (void)removeAllTextFields;
- (void)viewWillAppear:(BOOL)a0;
- (id)textFieldContainerViews;
- (id)textFieldAtIndex:(long long)a0;
- (id)addTextFieldWithPlaceholder:(id)a0;
- (long long)numberOfTextFields;
- (void)_returnKeyPressedInTextField:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
