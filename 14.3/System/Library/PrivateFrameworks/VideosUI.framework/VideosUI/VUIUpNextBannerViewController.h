@class TVObservableEventController, IKViewElement, NSString, TVMediaInfo, UIView, _TVShelfViewController;

@interface VUIUpNextBannerViewController : UIViewController <__TVShelfViewControllerDelegate, TVMediaProviding, TVAppTemplateImpressionable>

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) _TVShelfViewController *shelfViewController;
@property (retain, nonatomic) TVMediaInfo *selectedMediaInfo;
@property (retain, nonatomic) TVObservableEventController *observableEventController;
@property (nonatomic, getter=isFirstViewAppearance) BOOL firstViewAppearance;
@property (readonly, nonatomic) unsigned long long host;
@property (readonly, nonatomic) UIView *visualEffectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithHost:(unsigned long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)addObserver:(id)a0 forEvent:(id)a1;
- (void)removeObserver:(id)a0 forEvent:(id)a1;
- (id)_selectedMediaInfoForEvent:(id)a0 forElementAtIndex:(long long)a1;
- (id)_focusedMediaInfoForElementAtIndex:(long long)a0;
- (void)shelfViewController:(id)a0 didSettleOnItemAtIndexPath:(id)a1;
- (void)shelfViewController:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)shelfViewController:(id)a0 didPlayItemAtIndexPath:(id)a1;
- (id)impressionableElementsContainedInDocument:(id)a0;
- (void)updateWithElement:(id)a0;

@end
