@class NSString, NSArray, CNContactStore;

@interface PMSeparationSource : NSObject <DSSource> {
    CNContactStore *_contactStore;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *resourceNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)stopAllSharingWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)fetchSharedResourcesWithCompletion:(id /* block */)a0;
- (void)stopSharing:(id)a0 withCompletion:(id /* block */)a1;
- (void)stopSharingWithParticipant:(id)a0 completion:(id /* block */)a1;
- (id)_participantIdentityWithHandle:(id)a0;
- (void)_fetchGroupsExcludingInvitationsWithCompletionHandler:(id /* block */)a0;
- (void)_groupsAndParticipantsMatchingHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)_leaveGroup:(id)a0 completionHandler:(id /* block */)a1;
- (id)_passwordsGroupWithGroup:(id)a0;
- (id)_passwordsParticipantWithParticipant:(id)a0;
- (void)_removeAllOtherParticipantsFromGroup:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removeParticipant:(id)a0 fromGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)_stopSharingWithGroup:(id)a0 completionHandler:(id /* block */)a1;
- (void)_stopSharingWithGroups:(id)a0 completionHandler:(id /* block */)a1;
- (void)_stopSharingWithParticipant:(id)a0 inGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)_stopSharingWithParticipantsMatchingHandle:(id)a0 completionHandler:(id /* block */)a1;

@end
