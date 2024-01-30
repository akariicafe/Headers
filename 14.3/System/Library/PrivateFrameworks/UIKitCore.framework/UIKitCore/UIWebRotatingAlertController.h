@class UIWebDocumentView;

@interface UIWebRotatingAlertController : _UIRotatingAlertController {
    BOOL _wasDeferringCallbacks;
    UIWebDocumentView *_webBrowserView;
}

- (id)initWithUIWebDocumentView:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_enableWebView;
- (void)_disableWebView;
- (void)doneWithSheet;
- (BOOL)presentSheet;

@end
