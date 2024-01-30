@class AVAsset, AVCustomVideoCompositorSession, NSArray, AVAudioMix, AVMetadataItemFilter, AVVideoComposition;

@interface AVAssetExportSessionInternal : NSObject {
    struct OpaqueFigAssetExportSession { } *figExportSession;
    AVAsset *asset;
    AVAudioMix *audioMix;
    unsigned long long audioTrackGroupHandling;
    void *figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    AVVideoComposition *videoComposition;
    NSArray *metadata;
    AVMetadataItemFilter *metadataItemFilter;
    id /* block */ handler;
}

@end
