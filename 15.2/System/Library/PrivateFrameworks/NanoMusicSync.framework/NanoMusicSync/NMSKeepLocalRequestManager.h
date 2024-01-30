@class NSSet, NSOperationQueue, NSMutableSet;

@interface NMSKeepLocalRequestManager : NSObject {
    NSOperationQueue *_keepLocalRequestQueue;
    NSMutableSet *_keepLocalEnabledOnChargerAlbums;
    NSMutableSet *_keepLocalEnabledOnChargerPlaylists;
}

@property (readonly, nonatomic) NSSet *keepLocalEnabledOnChargerAlbums;
@property (readonly, nonatomic) NSSet *keepLocalEnabledOnChargerPlaylists;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)_addKeepLocalEnabledOnChargerPlaylist:(id)a0;
- (void)_addKeepLocalEnabledOnChargerAlbum:(id)a0;
- (void)_removeKeepLocalEnabledOnChargerPlaylist:(id)a0;
- (void)_removeKeepLocalEnabledOnChargerAlbum:(id)a0;
- (void)enqueueKeepLocalRequestEnabledForModelObject:(id)a0 onCharger:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)enqueueKeepLocalRequestDisabledForModelObject:(id)a0 completionHandler:(id /* block */)a1;

@end
