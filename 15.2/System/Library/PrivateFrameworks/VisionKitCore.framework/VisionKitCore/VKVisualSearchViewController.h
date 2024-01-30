@class NSArray, VKCVisualSearchResult, UIActivityIndicatorView;
@protocol VKVisualSearchViewControllerDelegate;

@interface VKVisualSearchViewController : UIViewController

@property (retain, nonatomic) VKCVisualSearchResult *visualSearchResult;
@property (nonatomic) BOOL didShowResults;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (weak, nonatomic) id<VKVisualSearchViewControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *visualSearchResultItems;

- (id)initWithImage:(struct CGImage { } *)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_showVisualSearchViewController;
- (id)_resultSectionsForRecognitionResult:(id)a0;
- (id)_resultSectionsForRecognitionResultItems:(id)a0;
- (void)presentSearchViewControllerForSections:(id)a0;
- (id)initWithVisualSearchResultItems:(id)a0;

@end
