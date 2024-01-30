@interface WFWebResourceCapturer : NSObject

+ (void)getPrintFormatterForWebResource:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getPasteboardRepresentationForWebResource:(id)a0 type:(id)a1 completionHandler:(id /* block */)a2;

- (void)generatePDFForWebResource:(id)a0 includeMargin:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
