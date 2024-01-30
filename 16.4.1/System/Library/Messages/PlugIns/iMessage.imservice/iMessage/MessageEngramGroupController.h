@class NSString;

@interface MessageEngramGroupController : NSObject <ENGroupContextObserverMiddleware>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)groupContext:(id)a0 didUpdateGroup:(id)a1 withNewGroup:(id)a2;
- (id)IDSServerBagiMessageSharedInstance;
- (id)_URIsFromApplicationData:(id)a0;
- (id)lockDownManager;
- (id)_URIsForChatParticipants:(id)a0 fromID:(id)a1;
- (void)_addRemoveParticipantsToENGroupForChat:(id)a0 participantsToAdd:(id)a1 participantsToRemove:(id)a2 service:(id)a3 fromID:(id)a4 attemptCount:(unsigned long long)a5 completion:(id /* block */)a6;
- (id)_callerURIForChat:(id)a0;
- (void)_checkAndSetUpContext:(id)a0;
- (id)_createApplicationDataForDestinations:(id)a0;
- (void)_createEngramGroupForChat:(id)a0 fromID:(id)a1 service:(id)a2 completion:(id /* block */)a3;
- (BOOL)_createGroupForExistingChat:(id)a0;
- (void)_createGroupFromGroupContext:(id)a0 chat:(id)a1 enparticipants:(id)a2 destinations:(id)a3 completion:(id /* block */)a4;
- (void)_createParticipantsAndUpdateGroup:(id)a0 addParticipantsURIs:(id)a1 removeParticipantURIs:(id)a2 fromID:(id)a3 service:(id)a4 completion:(id /* block */)a5;
- (long long)_daysToWaitBeforeCreatingEngroup;
- (void)_enparticipantsForDestinations:(id)a0 completion:(id /* block */)a1;
- (void)_updateGroupWithParticipants:(id)a0 chat:(id)a1 service:(id)a2 participants:(id)a3 destinations:(id)a4 completion:(id /* block */)a5;
- (void)_updateLocalParticipantsFromEngroup:(id)a0 chat:(id)a1 fromID:(id)a2;
- (void)addParticipantsToENGroup:(id)a0 chat:(id)a1 service:(id)a2 fromID:(id)a3 completion:(id /* block */)a4;
- (id)applicationDataDictionary:(id)a0;
- (void)convergeOnIncomingGroup:(id)a0 chat:(id)a1 service:(id)a2;
- (void)lookUpENGroupForChat:(id)a0 service:(id)a1 completion:(id /* block */)a2;
- (void)removeParticipantsFromENGroup:(id)a0 chat:(id)a1 service:(id)a2 fromID:(id)a3 completion:(id /* block */)a4;
- (void)sendMessageWithEngram:(id)a0 chat:(id)a1 service:(id)a2 fromID:(id)a3 fromAccount:(id)a4 session:(id)a5 context:(id)a6 groupController:(id)a7 completionBlock:(id /* block */)a8;

@end
