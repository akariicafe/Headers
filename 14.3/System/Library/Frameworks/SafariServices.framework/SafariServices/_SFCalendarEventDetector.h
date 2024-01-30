@class WKWebView;

@interface _SFCalendarEventDetector : NSObject {
    WKWebView *_webView;
    id /* block */ _checkForCalendarEventsBlock;
}

- (void).cxx_destruct;
- (void)_foundCalendarEvents:(id)a0;
- (void)_containsCalendarEventForPageWithSchemaOrgMarkup:(BOOL)a0;
- (void)_service:(id)a0 didFindEventCandidateForURL:(id)a1 pageTitle:(id)a2;
- (id)initWithWebView:(id)a0;
- (void)cancelCheckForConfirmationPage;
- (void)containsCalendarEventForPageWithSchemaOrgMarkup:(BOOL)a0;

@end
