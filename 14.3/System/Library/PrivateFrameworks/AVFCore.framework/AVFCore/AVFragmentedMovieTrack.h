@class AVFragmentedMovieTrackInternal;

@interface AVFragmentedMovieTrack : AVMovieTrack {
    AVFragmentedMovieTrackInternal *_fragmentedMovieTrack;
}

+ (BOOL)expectsPropertyRevisedNotifications;

- (void).cxx_destruct;

@end
