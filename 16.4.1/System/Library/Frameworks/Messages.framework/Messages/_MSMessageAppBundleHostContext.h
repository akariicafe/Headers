@class NSString;
@protocol _MSMessageComposeExtensionProtocol, _MSMessageComposeHostProtocol;

@interface _MSMessageAppBundleHostContext : NSObject <_MSMessageComposeHostImplProtocol>

@property (retain, nonatomic) id<_MSMessageComposeExtensionProtocol> appContext;
@property (weak, nonatomic) id<_MSMessageComposeHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_dismiss;
- (void).cxx_destruct;
- (void)_stageAssetArchive:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithAppContext:(id)a0;
- (void)_contentDidLoad;
- (void)_dismissAndPresentPhotosApp;
- (void)_dragMediaItemCanceled;
- (void)_dragMediaItemMoved:(id)a0 frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotation:(double)a2 scale:(double)a3 completionHandler:(id /* block */)a4;
- (void)_openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_presentAlertSheetWith:(id)a0 styles:(id)a1 completion:(id /* block */)a2;
- (void)_presentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 completion:(id /* block */)a3;
- (void)_presentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 destructiveButtonTitle:(id)a3 completion:(id /* block */)a4;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_removeAssetArchiveWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_requestHostSceneIdentifierWithCompletion:(id /* block */)a0;
- (void)_requestPresentationStyle:(unsigned long long)a0;
- (void)_requestResize;
- (void)_stageAppItem:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_stageMediaItem:(id)a0 skipShelf:(BOOL)a1 forceStage:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_stageRichLink:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_startDragMediaItem:(id)a0 frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fence:(id)a2 completionHandler:(id /* block */)a3;
- (void)_updateSnapshotForNextLaunch:(id)a0;

@end
