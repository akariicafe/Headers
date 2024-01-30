@class ACCMediaLibraryAccessory, NSArray, NSString, NSMutableDictionary, ACCMediaLibraryShim, NSObject, MPMusicPlayerController;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ACCMediaLibraryShimInfo : NSObject {
    NSMutableDictionary *_dbUpdateList;
    NSString *_syncValidityPersistentID;
    BOOL _sendHideNonLocal;
    BOOL _showCloudTracks;
    BOOL _showCloudTracksLastSent;
    BOOL _sendPlayAllSongsCapable;
    BOOL _requestedTransferID;
    BOOL _requestedMetaList;
    BOOL _requestedMetaProperties;
    BOOL _processingDiffUpdate;
}

@property (readonly, nonatomic) BOOL enableLibraryUpdate;
@property (retain, nonatomic) NSArray *stationsGroupList;
@property (readonly, nonatomic) ACCMediaLibraryShim *context;
@property (readonly, nonatomic) ACCMediaLibraryAccessory *accessory;
@property (readonly, nonatomic) BOOL isShuttingDown;
@property (readonly, nonatomic) id mpMediaLibrary;
@property (retain, nonatomic) NSString *anchor;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *libraryUpdateQ;
@property (readonly, nonatomic) int libraryType;
@property (readonly, nonatomic) NSString *UIDString;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *waitForWindowSem;
@property (readonly, nonatomic) BOOL subscribedToAppleMusic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mpMusicPlayerControllerQueue;
@property (retain, nonatomic) MPMusicPlayerController *mpMusicPlayerControllerHandler;

+ (id)getMediaItemForContentItem:(id)a0 propertyList:(id)a1 playlistContent:(id)a2;
+ (BOOL)isItemAd:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)_canShowCloudTracksDidChangeNotification:(id)a0;
- (id)getPlaylistItems:(id)a0;
- (id)_handlePlaylistContentForEntify:(id)a0 style:(int)a1 revision:(id)a2;
- (long long)_checkAndWaitForWindowOk:(long long)a0;
- (BOOL)_isVisibleUpdate:(id)a0;
- (long long)_attemptUpdate:(id /* block */)a0;
- (id)_handleMediaLibraryPlaylistUpdate:(id)a0 forLibrary:(id)a1 forProperties:(id)a2 success:(BOOL *)a3;
- (id)_handleMediaLibraryItemUpdate:(id)a0 forLibrary:(id)a1 forProperties:(id)a2 success:(BOOL *)a3 forceDelete:(BOOL)a4;
- (void)_sendRadioLibraryUpdates;
- (void)_beginRadioLibraryUpdates;
- (id)_beginMediaLibraryUpdatesWithAnchor:(id)a0 validity:(id)a1;
- (id)dbUpdateListDesc;
- (void)_mediaLibraryChanged:(id)a0;
- (void)_radioLibraryChanged:(id)a0;
- (id)_getUIDString;
- (void)_registerForMPNotifications;
- (id)_getMediaItemForPersistentID:(unsigned long long)a0;
- (void)playWithQuery:(id)a0 andFirstItem:(id)a1;
- (void)_startPlaybackOfRadioStation:(unsigned long long)a0;
- (void)_startPlaybackOfCollection:(unsigned long long)a0 ofType:(int)a1 withFirst:(id)a2 orIndex:(unsigned int)a3;
- (void)_startMLPlaybackOfAllSongsStartItem:(id)a0;
- (id)initWithMediaLibrary:(id)a0 accessory:(id)a1 Context:(id)a2 LibraryType:(int)a3;
- (void)startSendingMediaLibraryUpdates:(id)a0 lastRevision:(id)a1 requestedTransferID:(BOOL)a2 requestedMetaList:(BOOL)a3 requestedMetaProperties:(BOOL)a4;
- (void)stopSendingMediaLibraryUpdates;
- (void)shuttingDown;
- (void)startPlaybackOfItems:(id)a0 withFirst:(unsigned int)a1;
- (void)startPlaybackOfCollection:(unsigned long long)a0 ofType:(int)a1 withFirst:(unsigned int)a2;
- (void)startPlaybackOfCollection:(unsigned long long)a0 ofType:(int)a1 withFirstPersistentID:(unsigned long long)a2;
- (void)startMLPlaybackWithResume:(BOOL)a0;
- (void)startMLPlaybackOfAllSongs;
- (void)startMLPlaybackOfAllSongsStartPersistentID:(unsigned long long)a0;
- (void)confirmMediaLibraryUpdateLastRevision:(id)a0 updateCount:(unsigned int)a1;
- (void)confirmMediaLibraryPlaylistContentUpdateLastRevision:(id)a0;

@end
