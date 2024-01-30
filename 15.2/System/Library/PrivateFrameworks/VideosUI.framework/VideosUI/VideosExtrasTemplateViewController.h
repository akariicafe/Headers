@class NSString, VideosExtrasContext, IKViewElement, IKAppDocument, NSDictionary;

@interface VideosExtrasTemplateViewController : VideosExtrasElementViewController <IKAppDocumentDelegate> {
    IKViewElement *_displayedTemplate;
    NSDictionary *_options;
}

@property (readonly, nonatomic) IKAppDocument *document;
@property (readonly, nonatomic) BOOL showsPlaceholder;
@property (readonly, weak, nonatomic) VideosExtrasContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templateViewControllerWithDocument:(id)a0 options:(id)a1 context:(id)a2;

- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)_showPlaceholder;
- (void)documentDidUpdate:(id)a0;
- (void)_startBackgroundAudio;
- (BOOL)shouldUpdateByReplacingViewControllerWithTemplate:(id)a0;
- (void)configureBackgroundWithElements:(id)a0;
- (id)initWithDocument:(id)a0 options:(id)a1 context:(id)a2;
- (void)documentNeedsUpdate:(id)a0;
- (void)documentDidFail:(id)a0 withError:(id)a1;

@end
