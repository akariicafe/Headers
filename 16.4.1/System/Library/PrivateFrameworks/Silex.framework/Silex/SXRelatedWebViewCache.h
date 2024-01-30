@class NSMapTable;

@interface SXRelatedWebViewCache : NSObject

@property (readonly, nonatomic) NSMapTable *cache;

- (id)init;
- (void).cxx_destruct;
- (id)relatedWebViewForBaseURL:(id)a0;
- (void)storeRelatedWebView:(id)a0 baseURL:(id)a1;

@end
