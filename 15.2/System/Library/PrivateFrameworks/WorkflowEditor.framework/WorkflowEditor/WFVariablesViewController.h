@class NSMutableDictionary, UICollectionView, NSArray, UICollectionViewFlowLayout, NSString;
@protocol WFVariableProvider, WFVariablesViewControllerDelegate;

@interface WFVariablesViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (readonly, nonatomic) NSMutableDictionary *cellWidthCache;
@property (weak, nonatomic) id<WFVariablesViewControllerDelegate> delegate;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (nonatomic) BOOL showsUserDefinedVariables;
@property (nonatomic) BOOL showsMagicVariableButton;
@property (copy, nonatomic) NSArray *userDefinedVariableNames;
@property (copy, nonatomic) NSArray *specialVariables;
@property (copy, nonatomic) NSArray *suggestedVariables;
@property (readonly, nonatomic) long long scrollDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithScrollDirection:(long long)a0;
- (id)availableUserDefinedVariableNames;
- (void)magicVariableButtonPressed:(id)a0;
- (id)variableAtIndexPath:(id)a0;

@end
