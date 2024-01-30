@class MPMediaPlaylist;

@interface _NMSyncDefaultsAssociatedObject : NSObject

@property (retain, nonatomic) MPMediaPlaylist *assetSyncPlaylist;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_mediaLibraryDidChangeNotification:(id)a0;

@end
