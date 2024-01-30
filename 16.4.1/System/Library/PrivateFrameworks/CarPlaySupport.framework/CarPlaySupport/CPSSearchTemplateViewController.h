@class CPListTemplate, CPTemplate, NSString, CPSearchTemplate, NAFuture;
@protocol CPTemplateDelegate, CPSearchClientTemplateDelegate, CPSTemplateViewControllerDelegate;

@interface CPSSearchTemplateViewController : UISearchContainerViewController <UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate, CPListTemplateDelegate, CPSBaseTemplateViewController, CPSearchTemplateProviding>

@property (retain, nonatomic) CPListTemplate *listTemplate;
@property (readonly, nonatomic) CPSearchTemplate *searchTemplate;
@property (readonly, weak, nonatomic) id<CPSearchClientTemplateDelegate> searchTemplateDelegate;
@property (nonatomic) BOOL didPop;
@property (nonatomic) BOOL didDisappear;
@property (weak, nonatomic) id<CPSTemplateViewControllerDelegate> viewControllerDelegate;
@property (retain, nonatomic) CPTemplate *associatedTemplate;
@property (retain, nonatomic) id<CPTemplateDelegate> templateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NAFuture *templateProviderFuture;

- (void)_cleanup;
- (BOOL)searchBarShouldEndEditing:(id)a0;
- (void)didDismissSearchController:(id)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)listTemplate:(id)a0 didSelectListItem:(id)a1 completionHandler:(id /* block */)a2;
- (void)_cps_viewControllerWasPopped;
- (BOOL)_isSceneActive;
- (id)initWithSearchTemplate:(id)a0 templateDelegate:(id)a1 templateEnvironment:(id)a2 interactionModel:(unsigned long long)a3;

@end
