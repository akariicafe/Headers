@class UIWebDocumentView;

@interface UIWebRotatingAlertController : _UIRotatingAlertController {
    BOOL _wasDeferringCallbacks;
    UIWebDocumentView *_webBrowserView;
}

- (BOOL)presentSheet;
- (void).cxx_destruct;
- (id)initWithUIWebDocumentView:(id)a0;
- (void)dealloc;
- (void)_enableWebView;
- (void)_disableWebView;
- (void)doneWithSheet;

@end
