@class MPCFuture;

@interface _MPCMediaRemoteNullController : MPCMediaRemoteController {
    MPCFuture *_playQueueIdentifiersFuture;
    MPCFuture *_contentItemForIdentifierFuture;
    MPCFuture *_contentItemArtworkForIdentifierFuture;
}

+ (BOOL)_shouldRegisterForNotifications;

- (long long)contentItemArtworkCacheStateForIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (long long)contentItemCacheStateForIdentifier:(id)a0;
- (long long)supportedCommandsCacheState;
- (void)invalidateAllTokens;
- (long long)playbackStateCacheState;
- (id)supportedCommands;
- (void).cxx_destruct;
- (id)contentItemArtworkForContentItemIdentifier:(id)a0 artworkIdentifier:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (long long)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange { long long x0; long long x1; })a0;
- (id)_init;
- (long long)playingIdentifierCacheState;
- (id)contentItemForIdentifier:(id)a0;
- (id)playQueueIdentifiersForRequest:(void *)a0;
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange { long long x0; long long x1; })a0;
- (id)playingIdentifier;
- (id)playbackState;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 completion:(id /* block */)a2;

@end
