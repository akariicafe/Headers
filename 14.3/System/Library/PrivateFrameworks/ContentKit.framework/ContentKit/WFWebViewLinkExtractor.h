@interface WFWebViewLinkExtractor : NSObject

+ (void)extractLinksFromWKWebView:(id)a0 withDestinationWidth:(double)a1 completionHandler:(id /* block */)a2;
+ (void)extractLinksFromScriptResult:(id)a0 withDestinationWidth:(double)a1 completionHandler:(id /* block */)a2;
+ (id)linkPositionRetrievalJavaScript;

@end
