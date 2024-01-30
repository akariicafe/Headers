@interface TSKMoviePlaybackRegistry : NSObject

+ (id)sharedMoviePlaybackRegistry;

- (void)object:(id)a0 willTransferMoviePlaybackToObject:(id)a1;
- (void)objectDidEndMoviePlayback:(id)a0;
- (void)objectWillBeginMoviePlayback:(id)a0;

@end
