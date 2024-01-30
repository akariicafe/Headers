@class NSArray, NSString, NAFuture;
@protocol CPSearchTemplateDelegate;

@interface CPSearchTemplate : CPTemplate <CPSearchClientTemplateDelegate>

@property (retain, nonatomic) NSArray *listItems;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (weak, nonatomic) id<CPSearchTemplateDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setTrailingNavigationBarButtons:(id)a0;
- (id)leadingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:(id)a0;
- (id)trailingNavigationBarButtons;
- (void)searchTemplate:(id)a0 updateSearchResultsForSearchText:(id)a1 completionResults:(id /* block */)a2;
- (void)searchTemplate:(id)a0 selectedResult:(id)a1 completionHandler:(id /* block */)a2;
- (void)searchTemplateSearchButtonPressed:(id)a0;

@end
