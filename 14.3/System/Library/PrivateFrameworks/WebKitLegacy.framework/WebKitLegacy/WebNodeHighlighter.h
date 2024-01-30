@class WebView, WebNodeHighlight;

@interface WebNodeHighlighter : NSObject {
    WebView *_inspectedWebView;
    WebNodeHighlight *_currentHighlight;
}

- (void)highlight;
- (void)dealloc;
- (id)initWithInspectedWebView:(id)a0;
- (void)hideHighlight;
- (void)didAttachWebNodeHighlight:(id)a0;
- (void)willDetachWebNodeHighlight:(id)a0;

@end
