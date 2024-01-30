@class MPMediaPlaylist;

@interface _NMSyncDefaultsAssociatedObject : NSObject

@property (retain, nonatomic) MPMediaPlaylist *assetSyncPlaylist;

- (void)_mediaLibraryDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
