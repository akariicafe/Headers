@class NSMapTable;

@interface SXRelatedWebViewCache : NSObject

@property (readonly, nonatomic) NSMapTable *cache;

- (void).cxx_destruct;
- (id)init;
- (id)relatedWebViewForBaseURL:(id)a0;
- (void)storeRelatedWebView:(id)a0 baseURL:(id)a1;

@end
