@class MPCFuture;

@interface _MPCMediaRemoteNullController : MPCMediaRemoteController {
    MPCFuture *_playQueueIdentifiersFuture;
    MPCFuture *_contentItemForIdentifierFuture;
    MPCFuture *_contentItemArtworkForIdentifierFuture;
}

+ (BOOL)_shouldRegisterForNotifications;

- (long long)playingIdentifierCacheState;
- (id)supportedCommands;
- (id)contentItemForIdentifier:(id)a0;
- (id)_init;
- (long long)supportedCommandsCacheState;
- (long long)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange { long long x0; long long x1; })a0;
- (long long)playbackStateCacheState;
- (id)playingIdentifier;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)invalidateAllTokens;
- (long long)contentItemCacheStateForIdentifier:(id)a0;
- (id)playbackState;
- (id)contentItemArtworkForContentItemIdentifier:(id)a0 artworkIdentifier:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (long long)contentItemArtworkCacheStateForIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)playQueueIdentifiersForRequest:(void *)a0;
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange { long long x0; long long x1; })a0;

@end
