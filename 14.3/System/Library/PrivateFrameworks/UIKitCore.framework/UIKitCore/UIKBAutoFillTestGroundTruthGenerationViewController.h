@class UIView, NSString, UIScrollView, UIBarButtonItem, UIKBAutoFillTestTaggerView, NSLayoutConstraint, UIKBAutoFillTestViewController, UIKBAutoFillTestExpectedResult;
@protocol UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate;

@interface UIKBAutoFillTestGroundTruthGenerationViewController : UIViewController <UIKBAutoFillTestTaggerViewDelegate> {
    UIKBAutoFillTestExpectedResult *_expectedResult;
    UIScrollView *_scrollView;
    UIKBAutoFillTestTaggerView *_taggerView;
    NSLayoutConstraint *_scrollViewBottomConstraint;
    UIView *_highlightView;
    UIView *_highlightBox;
    UIBarButtonItem *_doneBarButtonItem;
}

@property (weak, nonatomic) id<UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIKBAutoFillTestViewController *testViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)taggerView:(id)a0 didTagFormRequest:(id)a1 withSelectedType:(long long)a2;
- (void)taggerView:(id)a0 didTagTextFieldRequest:(id)a1 withSelectedType:(long long)a2;
- (void)taggerView:(id)a0 willTagRequest:(id)a1;
- (long long)taggerView:(id)a0 selectedTypeForFormRequest:(id)a1;
- (void)taggerViewDidFinish:(id)a0;
- (long long)taggerView:(id)a0 selectedTypeForTextFieldRequest:(id)a1;
- (void)_cancelBarButtonItemAction:(id)a0;
- (void)_removeTaggerHighlightView;
- (void)_enumerateSubviewsOfRootView:(id)a0 usingBlock:(id /* block */)a1;
- (void)_moveTaggerHighlightViewOverView:(id)a0;
- (id)initWithAutoFillTestViewController:(id)a0;
- (void)viewDidLoad;

@end
