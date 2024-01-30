@class WKWebView;

@interface _SFCalendarEventDetector : NSObject {
    WKWebView *_webView;
    id /* block */ _checkForCalendarEventsBlock;
}

- (void)_containsCalendarEventForPageWithSchemaOrgMarkup:(BOOL)a0;
- (void)_foundCalendarEvents:(id)a0;
- (id)initWithWebView:(id)a0;
- (void).cxx_destruct;
- (void)cancelCheckForConfirmationPage;
- (void)containsCalendarEventForPageWithSchemaOrgMarkup:(BOOL)a0;
- (void)_service:(id)a0 didFindEventCandidateForURL:(id)a1 pageTitle:(id)a2;

@end
