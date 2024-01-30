@interface _WKAttributedStringWebViewCache : NSObject

+ (id)cache;
+ (id)configuration;
+ (void)clearConfiguration;
+ (void)cacheWebView:(id)a0;
+ (void)resetPurgeDelay;
+ (void)purgeSingleWebView;
+ (struct RetainPtr<WKWebView> { void *x0; })retrieveOrCreateWebView;
+ (void)purgeAllWebViews;

@end
