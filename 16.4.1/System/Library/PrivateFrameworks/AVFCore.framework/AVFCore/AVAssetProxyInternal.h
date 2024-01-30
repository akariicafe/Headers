@class AVAssetInspectorLoader, NSArray, AVDispatchOnce;

@interface AVAssetProxyInternal : NSObject {
    AVAssetInspectorLoader *loader;
    NSArray *tracks;
    AVDispatchOnce *makeTracksArrayOnce;
}

@end
