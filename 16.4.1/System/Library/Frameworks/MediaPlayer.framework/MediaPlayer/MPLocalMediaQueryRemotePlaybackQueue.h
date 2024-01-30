@class MPMediaQuery, MPMediaItem;

@interface MPLocalMediaQueryRemotePlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) MPMediaQuery *mediaQuery;
@property (readonly, nonatomic) MPMediaItem *firstItem;
@property (readonly, nonatomic) long long shuffleType;
@property (readonly, nonatomic) long long repeatType;

+ (BOOL)supportsSecureCoding;

- (BOOL)verifyWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { } *)a0 options:(id)a1;

@end
