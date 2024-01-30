@class NSArray, AVVideoOutputSettings, AVCustomVideoCompositorSession, AVVideoComposition;

@interface AVAssetReaderVideoCompositionOutputInternal : NSObject {
    NSArray *videoTracks;
    AVVideoOutputSettings *videoOutputSettings;
    AVVideoComposition *videoComposition;
    void *figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
}

@end
