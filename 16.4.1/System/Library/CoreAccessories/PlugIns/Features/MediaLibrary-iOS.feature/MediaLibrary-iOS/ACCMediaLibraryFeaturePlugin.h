@class ACCMediaLibraryProvider, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ACCMediaLibraryFeaturePlugin : NSObject <ACCMediaLibraryProviderDelegateProtocol, ACCMediaLibraryShimDelegate, ACCFeaturePluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (retain) ACCMediaLibraryProvider *mediaLibraryProvider;
@property (retain) NSMutableDictionary *mediaLibraryShimList;
@property (retain) NSObject<OS_dispatch_queue> *mediaLibraryCBProcessQ;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) ACCMediaLibraryProvider *provider;
@property (readonly, nonatomic) NSString *pluginName;

- (void)mediaLibrary:(id)a0 stopAllUpdate:(id)a1;
- (void)initPlugin;
- (void)mediaLibrary:(id)a0 accessoryLeft:(id)a1;
- (void)startPlugin;
- (void)mediaLibrary:(id)a0 playAllSongs:(id)a1 accessory:(id)a2;
- (void)mediaLibrary:(id)a0 confirmUpdate:(id)a1 lastRevision:(id)a2 updateCount:(unsigned int)a3 accessory:(id)a4;
- (void)mediaLibrary:(id)a0 playAllSongs:(id)a1 firstItemPersistentID:(unsigned long long)a2 accessory:(id)a3;
- (void)mediaLibrary:(id)a0 play:(id)a1 collection:(unsigned long long)a2 type:(int)a3 firstItemPersistentID:(unsigned long long)a4 accessory:(id)a5;
- (void)mediaLibrary:(id)a0 accessoryUpdate:(id)a1 windowPerLibrary:(unsigned int)a2;
- (void)mediaLibrary:(id)a0 play:(id)a1 collection:(unsigned long long)a2 type:(int)a3 firstItemIndex:(unsigned long long)a4 accessory:(id)a5;
- (void)mediaLibrary:(id)a0 confirmPlaylistContentUpdate:(id)a1 lastRevision:(id)a2 accessory:(id)a3;
- (void)mediaLibrary:(id)a0 playCurrentSelection:(id)a1 accessory:(id)a2;
- (void)mediaLibrary:(id)a0 startUpdate:(id)a1 lastRevision:(id)a2 requestedInfo:(id)a3 accessory:(id)a4;
- (void)mediaLibrary:(id)a0 accessoryArrived:(id)a1 windowPerLibrary:(unsigned int)a2;
- (void)mediaLibrary:(id)a0 stopUpdate:(id)a1 accessory:(id)a2;
- (void)stopPlugin;
- (void)mediaLibrary:(id)a0 play:(id)a1 itemList:(id)a2 firstItemIndex:(unsigned long long)a3 accessory:(id)a4;
- (void).cxx_destruct;
- (void)notify:(id)a0 stateChange:(int)a1 enabled:(BOOL)a2;
- (void)notifyAvailableLibraries:(id)a0;

@end
