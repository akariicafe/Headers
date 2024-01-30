@class MPPlaybackContext;

@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue {
    MPPlaybackContext *_playbackContext;
    long long _replaceIntent;
}

- (id)siriWHAMetricsInfo;
- (long long)replaceIntent;
- (id)siriRecommendationIdentifier;
- (void)setReplaceIntent:(long long)a0;
- (BOOL)isRequestingImmediatePlayback;
- (id)siriAssetInfo;
- (id)description;
- (void).cxx_destruct;
- (void)getPlaybackContextWithCompletion:(id /* block */)a0;
- (id)initWithPlaybackContext:(id)a0;

@end
