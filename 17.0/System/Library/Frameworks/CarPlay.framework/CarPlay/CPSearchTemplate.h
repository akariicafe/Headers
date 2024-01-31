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
- (void)setLeadingNavigationBarButtons:(id)a0;
- (id)leadingNavigationBarButtons;
- (void)searchTemplateSearchButtonPressedWithIdentifier:(id)a0;
- (void)searchTemplateWithIdentifier:(id)a0 selectedResultWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)searchTemplateWithIdentifier:(id)a0 updateSearchResultsForSearchText:(id)a1 completionResults:(id /* block */)a2;
- (id)trailingNavigationBarButtons;

@end
