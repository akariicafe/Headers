@interface WFWebResourceCapturer : NSObject

+ (void)getPasteboardRepresentationForWebResource:(id)a0 type:(id)a1 coercionOptions:(id)a2 completionHandler:(id /* block */)a3;
+ (void)getPrintFormatterForWebResource:(id)a0 coercionOptions:(id)a1 completionHandler:(id /* block */)a2;

- (void)generatePDFForWebResource:(id)a0 includeMargin:(BOOL)a1 coercionOptions:(id)a2 completionHandler:(id /* block */)a3;

@end
