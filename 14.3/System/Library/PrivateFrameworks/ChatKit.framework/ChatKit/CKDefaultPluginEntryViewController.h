@class CKBalloonView, UIContextMenuInteraction, IMBalloonPluginDataSource, NSString, IMBalloonPlugin, UIViewController;
@protocol CKPluginEntryViewControllerDelegate, CKTranscriptBalloonPluginController;

@interface CKDefaultPluginEntryViewController : UIViewController <UIContextMenuInteractionDelegate, CKPluginEntryViewController>

@property (retain, nonatomic) IMBalloonPluginDataSource *datasource;
@property (retain, nonatomic) UIViewController<CKTranscriptBalloonPluginController> *pluginBubbleViewController;
@property (retain, nonatomic) CKBalloonView *balloonView;
@property (retain, nonatomic) IMBalloonPlugin *plugin;
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKPluginEntryViewControllerDelegate> entryViewDelegate;
@property (readonly) BOOL wantsClearButton;
@property (readonly) BOOL wantsEdgeToEdgeLayout;
@property (readonly) BOOL loadedContentView;

- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)performHostAppResume;
- (void)performHostAppSuspend;
- (void)payloadWillSend;
- (id)_imageBalloon;
- (id)_copyActionForImageBalloonView;
- (id)_saveActionForImageBalloonView;
- (void)_loadBalloonView;
- (void)didFinishAnimatedBoundsChange;
- (id)_transcriptPluginBalloon;
- (id)initWithDataSource:(id)a0 entryViewDelegate:(id)a1;
- (void)payloadWillClear;
- (id)initWithDataSource:(id)a0 entryViewDelegate:(id)a1 andPlugin:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidLoad;

@end
