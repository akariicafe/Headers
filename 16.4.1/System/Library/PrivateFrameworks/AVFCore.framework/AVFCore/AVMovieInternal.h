@class NSArray, AVAssetInspectorLoader, NSURL, NSData, NSDictionary, AVDispatchOnce;

@interface AVMovieInternal : NSObject {
    AVAssetInspectorLoader *loader;
    NSURL *URL;
    NSData *data;
    NSDictionary *initializationOptions;
    NSArray *tracks;
    AVDispatchOnce *makeTracksArrayOnce;
}

- (void).cxx_destruct;

@end
