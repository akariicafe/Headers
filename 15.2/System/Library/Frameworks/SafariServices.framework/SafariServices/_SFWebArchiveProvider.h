@class NSString, WKWebView, NSData, NSURL, _SFQuickLookDocument;

@interface _SFWebArchiveProvider : NSObject <_SFQuickLookDocumentSource> {
    _SFQuickLookDocument *_quickLookDocument;
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

- (id)suggestedFileNameForQuickLookDocument:(id)a0;
- (id)suggestedFileExtensionForQuickLookDocument:(id)a0;
- (id)dataForQuickLookDocument:(id)a0;
- (id)initWithWebView:(id)a0;
- (void).cxx_destruct;
- (void)generateWebArchiveWithCompletionHandler:(id /* block */)a0;
- (id)_suggestedFilenameWithoutExtension;
- (id)_webViewUTI;
- (id)_quickLookDocument;

@end
