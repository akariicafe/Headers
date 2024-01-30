@interface WFWebViewLinkExtractor : NSObject

+ (id)linkPositionRetrievalJavaScript;
+ (void)extractLinksFromScriptResult:(id)a0 withDestinationWidth:(double)a1 completionHandler:(id /* block */)a2;
+ (void)extractLinksFromWKWebView:(id)a0 withDestinationWidth:(double)a1 completionHandler:(id /* block */)a2;

@end
