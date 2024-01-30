@class NSArray, AVVideoOutputSettings, AVCustomVideoCompositorSession, AVVideoComposition;

@interface AVAssetReaderVideoCompositionOutputInternal : NSObject {
    NSArray *videoTracks;
    NSArray *sampleDataTrackIDs;
    AVVideoOutputSettings *videoOutputSettings;
    AVVideoComposition *videoComposition;
    void *figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
}

@end
