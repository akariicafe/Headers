@interface _WKAttributedStringWebViewCache : NSObject

+ (id)cache;
+ (void)cacheWebView:(id)a0;
+ (void)resetPurgeDelay;
+ (void)purgeSingleWebView;
+ (struct RetainPtr<WKWebView> { void *x0; })retrieveOrCreateWebView;
+ (void)purgeAllWebViews;
+ (id)configuration;
+ (void)clearConfiguration;

@end
