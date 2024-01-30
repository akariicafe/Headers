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

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfTextFields;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)_updatePreferredContentSize;
- (void)updateTextFieldStyle;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_returnKeyPressedInTextField:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)addTextFieldWithPlaceholder:(id)a0;
- (id)textFieldContainerViews;
- (void).cxx_destruct;
- (void)removeAllTextFields;
- (id)init;
- (BOOL)resignFirstResponder;
- (double)_bottomMarginForTextFields;
- (id)textFieldAtIndex:(long long)a0;

@end
