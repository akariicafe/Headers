@class NSMapTable, WBSSiteMetadataManager;

@interface WBSFaviconRequestsController : NSObject {
    NSMapTable *_tokenToRequestToken;
}

@property (readonly, nonatomic) WBSSiteMetadataManager *manager;
@property (nonatomic) long long priority;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_issueRequest:(id)a0 isOneTime:(BOOL)a1 withToken:(id)a2 completion:(id /* block */)a3;
- (void)registerRequestForURLString:(id)a0 withToken:(id)a1 returnDefaultIconIfNoneAvailable:(BOOL)a2 iconSize:(struct CGSize { double x0; double x1; })a3 isURLTypedByUser:(BOOL)a4 completion:(id /* block */)a5;
- (void)registerOneTimeRequestForURLString:(id)a0 withToken:(id)a1 returnDefaultIconIfNoneAvailable:(BOOL)a2 iconSize:(struct CGSize { double x0; double x1; })a3 isURLTypedByUser:(BOOL)a4 completion:(id /* block */)a5;
- (void)cancelAllRegistrationsWithCompletionHandler:(id /* block */)a0;
- (id)initWithSiteMetadataManager:(id)a0;
- (void)registerRequestForDomain:(id)a0 withToken:(id)a1 completion:(id /* block */)a2;
- (void)registerRequestForURLString:(id)a0 withToken:(id)a1 completion:(id /* block */)a2;
- (void)registerOneTimeRequestForURLString:(id)a0 withToken:(id)a1 completion:(id /* block */)a2;
- (void)registerOneTimeRequestForDomain:(id)a0 withToken:(id)a1 completion:(id /* block */)a2;
- (void)cancelAllRegistrations;

@end
