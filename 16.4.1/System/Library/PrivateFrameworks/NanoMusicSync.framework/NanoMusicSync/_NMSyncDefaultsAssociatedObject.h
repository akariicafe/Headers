@class MPMediaPlaylist;

@interface _NMSyncDefaultsAssociatedObject : NSObject

@property (retain, nonatomic) MPMediaPlaylist *assetSyncPlaylist;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_mediaLibraryDidChangeNotification:(id)a0;

@end
