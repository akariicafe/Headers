@class NSString, SKUIClientContext, NSOperationQueue, SUAudioPlayer, IKAppDocument, NSHashTable;

@interface SKUIPreviewDocumentController : NSObject <IKAppDocumentDelegate, SKUIStatusOverlayProvider> {
    SUAudioPlayer *_audioPlayer;
    IKAppDocument *_document;
    NSOperationQueue *_operationQueue;
    NSHashTable *_viewControllers;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic, getter=isPreviewActive) BOOL previewActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDocument:(id)a0;
- (void).cxx_destruct;
- (id)_operationQueue;
- (void)_audioPlayerStatusChangeNotification:(id)a0;
- (void)_connectToAudioPlayer;
- (void)_playerSessionsDidChangeNotification:(id)a0;
- (void)_reloadViewControllersWithPreviewStatus:(id)a0 animated:(BOOL)a1;
- (void)documentDidUpdate:(id)a0;
- (void)documentNeedsUpdate:(id)a0;
- (id)overlayViewControllerWithBackgroundStyle:(long long)a0;

@end
