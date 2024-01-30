@class MPPlaybackContext;

@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue {
    MPPlaybackContext *_playbackContext;
    long long _replaceIntent;
}

- (long long)replaceIntent;
- (void)setReplaceIntent:(long long)a0;
- (BOOL)isRequestingImmediatePlayback;
- (id)siriRecommendationIdentifier;
- (void).cxx_destruct;
- (id)initWithPlaybackContext:(id)a0;
- (id)siriAssetInfo;
- (id)description;
- (void)getPlaybackContextWithCompletion:(id /* block */)a0;
- (id)siriWHAMetricsInfo;

@end
