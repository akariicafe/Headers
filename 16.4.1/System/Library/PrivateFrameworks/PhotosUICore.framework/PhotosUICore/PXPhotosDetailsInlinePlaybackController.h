@class PXTilingController, NSObject;
@protocol OS_dispatch_queue, PXPhotosDetailsInlinePlaybackControllerDelegate;

@interface PXPhotosDetailsInlinePlaybackController : PXGridInlinePlaybackController {
    NSObject<OS_dispatch_queue> *_recordCreationQueue;
}

@property (readonly, nonatomic) PXTilingController *tilingController;
@property (weak, nonatomic) id<PXPhotosDetailsInlinePlaybackControllerDelegate> delegate;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentVisibleRect;
- (BOOL)shouldEnablePlayback;
- (id)createPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (id)currentHoveredDisplayAsset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPlaybackRecord:(id)a0 minPlayableSize:(out struct CGSize { double x0; double x1; } *)a1;
- (id)init;
- (BOOL)canPlayAsset:(id)a0;
- (void).cxx_destruct;
- (struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })_currentTileIdentifierForRecord:(id)a0;
- (BOOL)_isRecognizedTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0;
- (void)checkInTile:(void *)a0 withIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a1;
- (void)checkOutTile:(void *)a0 withIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a1;
- (id)initWithTilingController:(id)a0;
- (void)updatePlaybackEnabled;

@end
