@class UIView, NSString, NSArray, NSMutableDictionary, UIButton, CAGradientLayer, UICollectionView, WFVariableShortcutsBarButtonCell;
@protocol WFVariableShortcutsBarDelegate, WFVariableProvider;

@interface WFVariableShortcutsBar : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) UIButton *doneButton;
@property (weak, nonatomic) UIView *maskingView;
@property (weak, nonatomic) CAGradientLayer *maskLayer;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) NSMutableDictionary *cellWidthCache;
@property (retain, nonatomic) WFVariableShortcutsBarButtonCell *variablesButton;
@property (weak, nonatomic) id<WFVariableShortcutsBarDelegate> delegate;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) BOOL showsVariables;
@property (nonatomic) BOOL showsUserDefinedVariables;
@property (nonatomic) BOOL showsMagicVariableButton;
@property (nonatomic) BOOL variablesButtonSelected;
@property (copy, nonatomic) NSString *customButtonTitle;
@property (copy, nonatomic) NSArray *userDefinedVariableNames;
@property (copy, nonatomic) NSArray *specialVariables;
@property (copy, nonatomic) NSArray *suggestedVariables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)doneButtonPressed;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldShowVariablesButton;
- (BOOL)shouldShowCustomButton;
- (void)barButtonPressed:(id)a0;

@end
