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

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDocument:(id)a0;
- (id)_operationQueue;
- (void)documentDidUpdate:(id)a0;
- (void)documentNeedsUpdate:(id)a0;
- (void)_playerSessionsDidChangeNotification:(id)a0;
- (void)_connectToAudioPlayer;
- (void)_reloadViewControllersWithPreviewStatus:(id)a0 animated:(BOOL)a1;
- (void)_audioPlayerStatusChangeNotification:(id)a0;
- (id)overlayViewControllerWithBackgroundStyle:(long long)a0;

@end
