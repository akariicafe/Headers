@class NSString, NSXPCConnection, NSHashTable, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface WBTabGroupSyncAgentProxy : NSObject <WBTabGroupSyncAgentSyncObserver, WBSDeallocationSentinelObserver, WBTabGroupSyncAgentProxyProtocol, WBTabGroupManagerObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_syncObserverQueue;
    NSHashTable *_syncObservers;
    NSDate *_firstReconnectionAttemptDate;
    unsigned long long _numberOfReconnectionAttempts;
}

@property (class, readonly, nonatomic) WBTabGroupSyncAgentProxy *sharedProxy;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tabGroupManagerDidUpdateSyncableContent:(id)a0;
- (void)didAddTabWithUUID:(id)a0 title:(id)a1 inSharedTabGroupWithUUID:(id)a2 byParticipantWithRecordID:(id)a3;
- (void)_setUpConnection;
- (id)_remoteObjectProxy;
- (void)didChangeScopedFavoritesInSharedTabGroupWithUUID:(id)a0 byParticipantWithRecordID:(id)a1;
- (void)acceptShareForURL:(id)a0 invitationTokenData:(id)a1 completionHandler:(id /* block */)a2;
- (void)addSyncObserver:(id)a0;
- (void)movePresenceForParticipantToTabWithUUID:(id)a0;
- (void)_enumerateSyncObserversUsingBlock:(id /* block */)a0;
- (void)sentinelDidDeallocateWithContext:(id)a0;
- (void)_setUpSyncObserverIfNeeded;
- (void)didNavigateInTabWithUUID:(id)a0 title:(id)a1 inSharedTabGroupWithUUID:(id)a2 byParticipantWithRecordID:(id)a3;
- (void)removeSyncObserver:(id)a0;
- (void)participants:(id)a0 didLeaveSharedTabGroupWithUUID:(id)a1;
- (void)dealloc;
- (BOOL)_shouldAttemptToReconnect;
- (void)userDidAcceptCloudKitShareWithMetadata:(id)a0 completionHandler:(id /* block */)a1;
- (void)_syncAgentDidLaunch:(id)a0;
- (void)didRemoveTabWithUUID:(id)a0 title:(id)a1 inSharedTabGroupWithUUID:(id)a2 byParticipantWithRecordID:(id)a3;
- (id)init;
- (void)activeParticipantsDidUpdateInTabWithUUID:(id)a0;
- (void)activeParticipantsDidUpdateInTabGroupWithUUID:(id)a0;
- (void)beginSharingTabGroupWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setUpConnectionIfNeeded;
- (void)scheduleSyncIfNeeded;
- (void)didFetchRecentlyAcceptedSharedTabGroupWithUUID:(id)a0 acceptedShareDate:(id)a1;
- (void).cxx_destruct;
- (id /* block */)emptyCompletionHandler;
- (id /* block */)emptyChangeSetCompletionHandler;
- (void)didChangeBackgroundImageInSharedTabGroupWithUUID:(id)a0 byParticipantWithRecordID:(id)a1;
- (void)participants:(id)a0 didJoinSharedTabGroupWithUUID:(id)a1;
- (void)shareDidUpdateForTabGroupWithUUID:(id)a0;

@end
