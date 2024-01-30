@class NSString, TSUMutablePointerSet;

@interface TSKMoviePlaybackRegistry : NSObject {
    TSUMutablePointerSet *_playingObjectPointerSet;
    NSString *_savedAudioCategory;
    NSString *_savedAudioMode;
    unsigned long long _savedAudioCategoryOptions;
}

+ (id)sharedMoviePlaybackRegistry;

- (id)init;
- (void).cxx_destruct;
- (void)objectWillBeginMoviePlayback:(id)a0;
- (void)objectDidEndMoviePlayback:(id)a0;

@end
