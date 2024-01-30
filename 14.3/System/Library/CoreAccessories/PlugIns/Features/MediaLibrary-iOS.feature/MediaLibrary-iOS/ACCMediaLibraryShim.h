@class ACCMediaLibraryAccessory, ACCMediaLibraryShimInfo, NSMutableDictionary, NSDictionary, ACCMemUsageStat, NSObject, MPMediaLibrary, ACCSettingsState, MPRadioLibrary;
@protocol OS_dispatch_queue, ACCMediaLibraryShimDelegate;

@interface ACCMediaLibraryShim : NSObject {
    NSDictionary *_libraries;
    MPMediaLibrary *_deviceMediaLibrary;
    MPRadioLibrary *_mpRadioLibrary;
    BOOL _enableLibraryInfoUpdate;
}

@property (nonatomic) BOOL isSubscribedToAppleMusic;
@property (retain, nonatomic) ACCSettingsState *measureMemoryUsage;
@property (readonly, nonatomic) ACCMediaLibraryAccessory *accessory;
@property (readonly, nonatomic) BOOL isShuttingDown;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *libraryInfoUpdateQ;
@property (readonly, nonatomic) NSMutableDictionary *libraryList;
@property (readonly, nonatomic) ACCMediaLibraryShimInfo *deviceLibrary;
@property (readonly, nonatomic) ACCMediaLibraryShimInfo *radioLibrary;
@property (readonly, nonatomic) BOOL radioIsEnabled;
@property (readonly, nonatomic) BOOL subscribedToAppleMusic;
@property (nonatomic) unsigned int windowPerLibrary;
@property (readonly, weak, nonatomic) id<ACCMediaLibraryShimDelegate> delegate;
@property (readonly, nonatomic) ACCMemUsageStat *memUse;

+ (BOOL)isMusicAppVisible;
+ (BOOL)allowCachedTracksForAppleMusic;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (BOOL)isGeniusMixesSupported;
- (void)shuttingDown;
- (void)_updateSubscribedToAppleMusicStatus:(BOOL)a0;
- (void)_updateMediaLibraryInfomationUpdates:(BOOL)a0;
- (void)_mediaLibrariesAvailableChanged:(id)a0;
- (void)_handlMediaLibraryNeedFilterChange:(id)a0;
- (void)_setupNewLibraries:(id)a0;
- (BOOL)_checkForDifferentRadioLibrary;
- (BOOL)_checkForDifferentMediaLibraries;
- (void)_sendLibraryInfoList;
- (void)_handleSubscribedToAppleMusicChanged:(id)a0;
- (id)initWithAccessory:(id)a0 windowPerLibrary:(unsigned int)a1 delegate:(id)a2;
- (void)startShim;
- (void)startSendingMediaLibraryInfomationUpdates;
- (void)stopSendingMediaLibraryInfomationUpdates;
- (void)startMediaLibraryUpdate:(id)a0 lastRevision:(id)a1 requestedInfo:(id)a2;
- (void)stopMediaLibraryUpdate:(id)a0;
- (void)stopAllMediaLibraryUpdate;
- (void)playMediaLibraryCurrentSelection:(id)a0;
- (void)playMediaLibraryItems:(id)a0 itemList:(id)a1 firstItemIndex:(unsigned long long)a2;
- (void)playMediaLibraryCollection:(id)a0 collection:(unsigned long long)a1 type:(int)a2 firstItemIndex:(unsigned long long)a3;
- (void)playMediaLibraryCollection:(id)a0 collection:(unsigned long long)a1 type:(int)a2 firstItemPersistentID:(unsigned long long)a3;
- (void)playAllSongs:(id)a0;
- (void)playAllSongs:(id)a0 firstItemPersistentID:(unsigned long long)a1;
- (void)confirmMediaLibraryUpdate:(id)a0 lastRevision:(id)a1 updateCount:(unsigned int)a2;
- (void)confirmMediaLibraryPlaylistContentUpdate:(id)a0 lastRevision:(id)a1;

@end
