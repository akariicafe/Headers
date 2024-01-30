@class AVMovieTrackInternal;

@interface AVMovieTrack : AVAssetTrack {
    AVMovieTrackInternal *_movieTrackInternal;
}

@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } mediaPresentationTimeRange;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } mediaDecodeTimeRange;
@property (readonly, nonatomic) long long alternateGroupID;

+ (BOOL)expectsPropertyRevisedNotifications;

- (void).cxx_destruct;
- (id)description;
- (id)mediaDataStorage;

@end
