@class NSString, RVQuery;

@interface DDLookupAction : DDParsecPreviewAction {
    NSString *_queryString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _queryStringRange;
    RVQuery *_query;
    id /* block */ _reportAnIssueBlock;
    id /* block */ _reportAnIssueMetadataFetchingBlock;
}

- (id)menuActions;
- (id)iconName;
- (void).cxx_destruct;
- (void)adaptForPresentationInPopover:(BOOL)a0;
- (id)createViewController;
- (id)initWithQueryString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 context:(id)a2;
- (id)initWithRVQuery:(id)a0 context:(id)a1;
- (id)initWithRVQuery:(id)a0 reportAnIssueBlock:(id /* block */)a1 context:(id)a2;
- (id)initWithRVQuery:(id)a0 reportAnIssueBlock:(id /* block */)a1 metadataFetchingBlock:(id /* block */)a2 context:(id)a3;

@end
