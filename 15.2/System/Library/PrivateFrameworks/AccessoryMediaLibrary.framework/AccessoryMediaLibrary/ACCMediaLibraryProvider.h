@class NSMutableDictionary, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, ACCMediaLibraryProviderDelegateProtocol, ACCMediaLibraryXPCServerProtocol;

@interface ACCMediaLibraryProvider : NSObject

@property (weak, nonatomic) id<ACCMediaLibraryProviderDelegateProtocol> delegate;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *delegateQ;
@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<ACCMediaLibraryXPCServerProtocol> remoteObject;
@property (retain, nonatomic) NSMutableDictionary *accessories;
@property (retain, nonatomic) NSMutableDictionary *libraries;
@property (nonatomic) int lastUpdateType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSString *providerUID;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)description;
- (void)connectToServer;
- (void)notify:(id)a0 stateChange:(int)a1 enabled:(BOOL)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)notifyAvailableLibraries:(id)a0;
- (long long)update:(id)a0 revision:(id)a1 content:(id)a2 accessory:(id)a3;
- (void)resetUpdate:(id)a0 accessory:(id)a1;
- (void)accessoryMediaLibraryAttached:(id)a0 windowPerLibrary:(unsigned int)a1;
- (void)accessoryMediaLibraryDetached:(id)a0;
- (void)accessoryMediaLibraryUpdate:(id)a0 windowPerLibrary:(unsigned int)a1;
- (void)startMediaLibraryUpdate:(id)a0 library:(id)a1 lastRevision:(id)a2 mediaItemProperties:(unsigned long long)a3 playlistProperties:(unsigned long long)a4 playlistContentStyle:(int)a5 playlistContentProperties:(unsigned long long)a6 reqOptions:(unsigned long long)a7;
- (void)stopMediaLibraryUpdate:(id)a0 library:(id)a1;
- (void)stopAllMediaLibraryUpdate:(id)a0;
- (void)confirmUpdate:(id)a0 library:(id)a1 lastRevision:(id)a2 updateCount:(unsigned int)a3;
- (void)confirmPlaylistContentUpdate:(id)a0 library:(id)a1 lastRevision:(id)a2;
- (void)playCurrentSelection:(id)a0 library:(id)a1;
- (void)playItems:(id)a0 library:(id)a1 itemList:(id)a2 startIndex:(unsigned int)a3;
- (void)playCollection:(id)a0 library:(id)a1 collection:(unsigned long long)a2 type:(int)a3 startItem:(unsigned long long)a4;
- (void)playCollection:(id)a0 library:(id)a1 collection:(unsigned long long)a2 type:(int)a3 startIndex:(unsigned int)a4;
- (void)playAllSongs:(id)a0 library:(id)a1 startItem:(unsigned long long)a2;
- (void)accessoryMediaLibraryAllDetached;
- (void)_notifyRemoteOfAvailableLibraries;
- (void)_checkPlaylistContentToSend:(id)a0 accessory:(id)a1;
- (void)flushUpdates:(id)a0 accessory:(id)a1;
- (long long)update:(id)a0 revision:(id)a1 persistentID:(unsigned long long)a2 type:(int)a3 updateInfo:(id)a4 progress:(unsigned char)a5 accessory:(id)a6;
- (long long)update:(id)a0 revision:(id)a1 item:(id)a2 progress:(unsigned char)a3 accessory:(id)a4;
- (long long)update:(id)a0 revision:(id)a1 playlist:(id)a2 progress:(unsigned char)a3 accessory:(id)a4;
- (long long)update:(id)a0 revision:(id)a1 deleteItem:(unsigned long long)a2 progress:(unsigned char)a3 accessory:(id)a4;
- (long long)update:(id)a0 revision:(id)a1 deletePlaylist:(unsigned long long)a2 progress:(unsigned char)a3 accessory:(id)a4;
- (long long)update:(id)a0 revision:(id)a1 progress:(unsigned char)a2 accessory:(id)a3;

@end
