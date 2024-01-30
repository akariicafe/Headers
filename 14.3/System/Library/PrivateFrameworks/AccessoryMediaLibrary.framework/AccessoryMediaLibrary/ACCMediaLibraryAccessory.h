@class NSString, NSMutableDictionary, ACCMediaLibraryProvider, NSObject;
@protocol OS_dispatch_queue;

@interface ACCMediaLibraryAccessory : NSObject

@property (readonly, nonatomic) NSMutableDictionary *libraries;
@property (retain, nonatomic) NSMutableDictionary *pendingUpdates;
@property (retain, nonatomic) NSMutableDictionary *waitingConfirm;
@property (retain, nonatomic) NSMutableDictionary *pendingPlaylistContentUpdates;
@property (retain, nonatomic) NSMutableDictionary *confirmedRevisionList;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *listQueue;
@property (readonly, nonatomic) NSString *accessoryUID;
@property (readonly, weak, nonatomic) ACCMediaLibraryProvider *provider;
@property (nonatomic) unsigned int windowPerLibrary;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)_pendingUpdatesForLibrary:(id)a0 createIfNotExist:(BOOL)a1;
- (unsigned long long)_pendingAndWaitingConfirmUpdatesCountForLibrary:(id)a0;
- (id)_pendingPlaylistContentUpdatesForLibrary:(id)a0 createIfNotExist:(BOOL)a1;
- (unsigned long long)_pendingPlaylistContentUpdatesCountForLibrary:(id)a0;
- (BOOL)_pendingUpdatesAndWaitingConfirmFullForLibrary:(id)a0;
- (id)_waitingUpdatesForLibrary:(id)a0 createIfNotExist:(BOOL)a1;
- (id)_confirmedRevisionListForLibrary:(id)a0 createIfNotExist:(BOOL)a1;
- (void)_addToWaitlistForLibrary:(id)a0 list:(id)a1;
- (void)_pendingUpdatesRemoveLibraryIfEmpty:(id)a0;
- (void)_pendingPlaylistContentUpdatesRemoveLibraryIfEmpty:(id)a0;
- (void)_confirmedRevisionListRemoveLibraryIfEmpty:(id)a0;
- (BOOL)pendingUpdatesAndWaitingConfirmFullForLibrary:(id)a0;
- (unsigned long long)pendingAndWaitingConfirmUpdatesCountForLibrary:(id)a0;
- (void)_waitingUpdatesRemoveLibraryIfEmpty:(id)a0;
- (void)_addConfirmedRevisionForLibrary:(id)a0 revisionsToAdd:(id)a1;
- (unsigned long long)pendingPlaylistContentUpdatesCountForLibrary:(id)a0;
- (id)initWithUID:(id)a0 windowPerLibrary:(unsigned int)a1 provider:(id)a2;
- (void)addLibraryInfo:(id)a0;
- (void)_addToWaitlistForLibrary:(id)a0 item:(id)a1;
- (void)_addConfirmedRevisionForLibrary:(id)a0 revision:(id)a1;
- (id)copyPendingNonContentUpdatesToSendForLibrary:(id)a0;
- (id)copyPendingPlaylistContentUpdatesToSendForLibrary:(id)a0;
- (BOOL)addUpdate:(id)a0 library:(id)a1;
- (BOOL)addPlaylistContentUpdate:(id)a0 library:(id)a1;
- (id)confirmUpdates:(id)a0 revision:(id)a1 count:(unsigned int)a2;
- (void)confirmPlaylistContentUpdates:(id)a0 revision:(id)a1;
- (void)clearAllUpdates;

@end
