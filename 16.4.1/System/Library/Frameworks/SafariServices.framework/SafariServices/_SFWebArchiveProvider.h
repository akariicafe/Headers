@class NSString, SFQuickLookDocument, WKWebView, NSData, NSURL;

@interface _SFWebArchiveProvider : NSObject <SFQuickLookDocumentSource> {
    SFQuickLookDocument *_quickLookDocument;
    NSData *_webArchiveData;
    NSString *_cachedWebViewTitle;
    NSURL *_cachedWebViewURL;
}

@property (readonly, weak, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) NSString *suggestedFilenameWithExtension;
@property (readonly, nonatomic) NSString *suggestedFilenameWithoutExtension;
@property (readonly, nonatomic) BOOL canGenerateWebArchive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWebView:(id)a0;
- (id)suggestedFileNameForQuickLookDocument:(id)a0;
- (id)dataForQuickLookDocument:(id)a0;
- (void).cxx_destruct;
- (id)suggestedFileExtensionForQuickLookDocument:(id)a0;
- (id)_quickLookDocument;
- (id)_suggestedFilenameWithoutExtension;
- (id)_webViewUTI;
- (void)generateWebArchiveWithCompletionHandler:(id /* block */)a0;

@end
