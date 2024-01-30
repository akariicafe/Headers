@class MPModelPlaylist;

@interface MPModelPlaylistEntriesShareEligibilityRequest : NSObject <NSCopying>

@property (readonly, nonatomic) MPModelPlaylist *playlist;

- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithPlaylist:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
