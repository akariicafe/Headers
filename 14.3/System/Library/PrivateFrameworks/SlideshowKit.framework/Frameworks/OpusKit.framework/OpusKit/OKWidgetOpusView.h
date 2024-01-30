@class NSURL, OKPresentationViewController, OKDocument;

@interface OKWidgetOpusView : OKWidgetView {
    NSURL *_url;
    OKDocument *_document;
    OKPresentationViewController *_presentationViewController;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (BOOL)prepareForDisplay:(BOOL)a0;
- (void)dealloc;
- (id)initWithWidget:(id)a0;
- (void)layoutSubviews;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (BOOL)prepareForUnload:(BOOL)a0;
- (void)setSettingUrl:(id)a0;
- (void)_loadDocumentIfNeeded;

@end
