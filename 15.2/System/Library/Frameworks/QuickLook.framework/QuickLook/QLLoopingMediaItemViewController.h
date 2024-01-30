@class AVQueuePlayer;

@interface QLLoopingMediaItemViewController : QLMediaItemBaseViewController {
    AVQueuePlayer *_queuePlayer;
    BOOL _addedObservers;
}

- (void).cxx_destruct;
- (BOOL)pause;
- (BOOL)play;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)player;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)previewDidAppear:(BOOL)a0;
- (void)startObservingItem;
- (void)stopObservingItem;
- (void)setupPlayerWithMediaAsset:(id)a0;

@end
