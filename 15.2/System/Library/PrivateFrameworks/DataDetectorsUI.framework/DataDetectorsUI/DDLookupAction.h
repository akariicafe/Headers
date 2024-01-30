@class NSString, RVQuery;

@interface DDLookupAction : DDParsecPreviewAction {
    NSString *_queryString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _queryStringRange;
    RVQuery *_query;
}

- (id)menuActions;
- (void).cxx_destruct;
- (id)createViewController;
- (void)adaptForPresentationInPopover:(BOOL)a0;
- (id)initWithQueryString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 context:(id)a2;
- (id)initWithRVQuery:(id)a0 context:(id)a1;

@end
