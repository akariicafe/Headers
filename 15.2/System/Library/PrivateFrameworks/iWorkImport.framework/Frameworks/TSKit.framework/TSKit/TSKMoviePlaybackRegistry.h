@class NSString, TSUMutablePointerSet;

@interface TSKMoviePlaybackRegistry : NSObject {
    TSUMutablePointerSet *_playingObjectPointerSet;
    NSString *_savedAudioCategory;
    NSString *_savedAudioMode;
    unsigned long long _savedAudioCategoryOptions;
}

+ (id)sharedMoviePlaybackRegistry;

- (void).cxx_destruct;
- (id)init;
- (void)objectWillBeginMoviePlayback:(id)a0;
- (void)objectDidEndMoviePlayback:(id)a0;

@end
