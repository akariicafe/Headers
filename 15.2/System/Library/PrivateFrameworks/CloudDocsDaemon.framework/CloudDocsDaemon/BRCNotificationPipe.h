@class BRNotificationQueue, NSString, BRCItemGlobalID, BRFileObjectID, NSMutableDictionary, NSSet, NSObject, NSMutableSet, BRCXPCClient, BRCNotificationManager, BRCDataOrDocsScopeGatherer;
@protocol OS_dispatch_group, BRCNotificationPipeDelegate, OS_dispatch_queue, BRItemNotificationReceiving;

@interface BRCNotificationPipe : NSObject <BRItemNotificationSending> {
    id<BRItemNotificationReceiving> _receiver;
    BRNotificationQueue *_notifs;
    id /* block */ _boostReply;
    BRCXPCClient *_client;
    BRCDataOrDocsScopeGatherer *_gatherer;
    NSObject<OS_dispatch_group> *_gatherGroup;
    BOOL _hasUpdatesInFlight;
    BOOL _volumeIsCaseSensitive;
    NSMutableDictionary *_pendingProgressUpdatesByID;
    BOOL _hasProgressUpdatesInFlight;
    unsigned short _watchItemOptions;
    int _watchKind;
    NSString *_watchNamePrefix;
    NSString *_watchForBundleID;
    NSMutableSet *_externalAppLibraries;
    NSSet *_watchedAppLibraries;
    NSSet *_watchedAppLibraryIDs;
    unsigned long long _watchedAppLibrariesFlags;
    unsigned long long _initialGatherMaxRank;
    unsigned long long _secondaryGatherMaxRank;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) BRCItemGlobalID *oldWatchedAncestorItemGlobalID;
@property (retain) BRCItemGlobalID *watchedAncestorItemGlobalID;
@property (retain) BRFileObjectID *watchedAncestorFileObjectID;
@property (retain) NSString *watchedAncestorFilenameToItem;
@property (readonly, nonatomic) BRCNotificationManager *manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<BRCNotificationPipeDelegate> delegate;

- (void)_prepareForSecondGatherWithRank:(unsigned long long)a0;
- (void)close;
- (void)__flush;
- (void)invalidateIfWatchingAppLibraryIDs:(id)a0;
- (void)watchItemAtURL:(id)a0 lookup:(id)a1 options:(unsigned short)a2 gatherReply:(id /* block */)a3;
- (id)_initWithManager:(id)a0 startingRank:(unsigned long long)a1;
- (id)initWithXPCReceiver:(id)a0 client:(id)a1 manager:(id)a2 startingRank:(unsigned long long)a3;
- (void)watchItemInProcessAtURL:(id)a0 options:(unsigned short)a1 gatherReply:(id /* block */)a2;
- (void)addDequeueCallback:(id /* block */)a0;
- (id)initWithReceiver:(id)a0 manager:(id)a1 startingRank:(unsigned long long)a2;
- (void)boostPriority:(id /* block */)a0;
- (void)_stopWatchingItems;
- (void)_triggerImmediateReadOfDocumentIfNeeded;
- (void).cxx_destruct;
- (void)processUpdates:(id)a0 withRank:(unsigned long long)a1;
- (void)_processProgressUpdates:(id)a0;
- (void)watchScopes:(unsigned short)a0 trustedAppLibraryIDs:(id)a1 gatherReply:(id /* block */)a2;
- (void)_gatherIfNeededAndFlushAsync;
- (void)watchScopes:(unsigned short)a0 gatherReply:(id /* block */)a1;
- (void)addNotification:(id)a0 asDead:(BOOL)a1;
- (oneway void)invalidate;
- (void)_registerAsWatcherIfNeeded;
- (void)processProgressUpdates:(id)a0;
- (void)dealloc;
- (void)invalidateReceiverIfWatchingAppLibraryIDs:(id)a0;
- (void)_flushProgressUpdates;
- (void)watchItemAtURL:(id)a0 options:(unsigned short)a1 gatherReply:(id /* block */)a2;
- (void)watchScopes:(unsigned short)a0 appLibraryIDs:(id)a1 gatherReply:(id /* block */)a2;
- (void)_addIntraContainerUpdatesFromInterContainerUpdate:(id)a0 toArray:(id)a1;
- (void)watchItemsNamesPrefixedBy:(id)a0 inScopes:(unsigned short)a1 appLibraryIDs:(id)a2 gatherReply:(id /* block */)a3;
- (int)_isInterestingUpdate:(id)a0;

@end
