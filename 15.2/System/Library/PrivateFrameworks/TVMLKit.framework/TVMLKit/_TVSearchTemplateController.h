@class UIView, NSString, IKViewElement, IKTextFieldElement, UISearchController, IKAppKeyboard, _TVStackCollectionViewController, UIActivityIndicatorView;

@interface _TVSearchTemplateController : _TVBgImageLoadingViewController <UISearchResultsUpdating, UISearchBarDelegate, IKAppKeyboardDelegate, _TVStackCollectionViewControllerDelegate, TVAppTemplateImpressionable> {
    IKTextFieldElement *_searchFieldElement;
    IKAppKeyboard *_ikKeyboard;
    IKViewElement *_collectionListElement;
    double _impressionThreshold;
    IKViewElement *_nonResultsElement;
    UISearchController *_searchController;
    _TVStackCollectionViewController *_resultsViewController;
    UIView *_nonResultsView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    UIActivityIndicatorView *_spinner;
    UIView *_originalSearchFieldRightView;
    long long _originalSearchFieldRightViewMode;
}

@property (readonly, nonatomic) IKViewElement *viewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_keyboardDidChangeFrame:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)loadView;
- (id)collectionView;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)updateNavigationItem:(id)a0;
- (void)textDidChangeForKeyboard:(id)a0;
- (void)updateWithViewElement:(id)a0;
- (void)_cancelImpressionsUpdate;
- (id)impressionableElementsContainedInDocument:(id)a0;
- (void)stackCollectionViewController:(id)a0 scrollViewDidScroll:(id)a1;
- (void)_updateImpressions;
- (void)_recordImpressionsForVisibleView;
- (void)_updateKeyboardText;
- (void)_setNonResultsView:(id)a0;
- (BOOL)_searchBarContainsFocus;
- (void)_updateSearchFieldText;
- (BOOL)_isAtWordEnd;
- (id)_sanitizedText;
- (void)_scrollToTopAnimated:(BOOL)a0;

@end
