@class UINavigationController, NSString, WebClipViewController, UIWebClip, _WKApplicationManifest;

@interface AddToHomeScreenUIActivity : TabDocumentActivity <WebClipDelegate, WebClipViewControllerDelegate> {
    UINavigationController *_wrappingNavigationController;
    WebClipViewController *_webClipViewController;
    UIWebClip *_webClip;
    BOOL _webClipConfigured;
    BOOL _waitingForSnapshot;
    _WKApplicationManifest *_manifest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityType;
- (id)activityViewController;
- (void)webClip:(id)a0 iconRequestDidFinishWithImage:(id)a1 precomposed:(BOOL)a2;
- (void)webClip:(id)a0 startupImageRequestDidFinishWithImage:(id)a1;
- (void)webClip:(id)a0 startupLandscapeImageRequestDidFinishWithImage:(id)a1;
- (void).cxx_destruct;
- (id)_embeddedActivityViewController;
- (id)activityTitle;
- (id)_systemImageName;
- (void)dealloc;
- (void)activityDidFinish:(BOOL)a0;
- (void)prepareWithTabDocument:(id)a0 completion:(id /* block */)a1;
- (void)webClipViewController:(id)a0 didFinishWithResult:(BOOL)a1;
- (void)_finishPreparing;
- (void)_createWebClip;
- (id)_manifestTitle;
- (void)_updateImageFromActiveTabDocument;

@end
