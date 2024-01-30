@class NSString, UIViewController;
@protocol PXGridPresentationBarsUpdateDelegate;

@interface PUPXFilteredMomentsViewController : PUFilteredMomentsViewController <PXChangeObserver>

@property (weak, nonatomic) UIViewController *containerViewController;
@property (weak, nonatomic) id<PXGridPresentationBarsUpdateDelegate> barsUpdateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)oneUpPresentationHelperViewController:(id)a0;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)updateNavigationBarAnimated:(BOOL)a0;
- (void)getEmptyPlaceholderViewTitle:(id *)a0 message:(id *)a1 buttonTitle:(id *)a2 buttonAction:(id /* block */ *)a3;
- (BOOL)isInPlaces:(id)a0;
- (void)pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings { long long x0; double x1; })a0;

@end
