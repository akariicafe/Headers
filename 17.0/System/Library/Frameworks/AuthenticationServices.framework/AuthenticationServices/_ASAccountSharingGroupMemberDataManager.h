@class CNContactStore, NSMutableDictionary, CNAvatarImageRenderer, AAUIProfilePictureStore, ACAccountStore, _ASAccountSharingGroupMemberData;

@interface _ASAccountSharingGroupMemberDataManager : NSObject {
    ACAccountStore *_accountStore;
    CNAvatarImageRenderer *_avatarImageRenderer;
    NSMutableDictionary *_avatarImageDiameterToRenderingScopes;
    AAUIProfilePictureStore *_profilePictureStore;
}

@property (class, readonly, nonatomic) _ASAccountSharingGroupMemberDataManager *sharedManager;

@property (readonly, nonatomic) _ASAccountSharingGroupMemberData *groupMemberDataForPrimaryAccount;
@property (readonly, nonatomic) CNContactStore *contactStore;

- (id)init;
- (double)_screenScale;
- (void).cxx_destruct;
- (id)avatarImageForContact:(id)a0 diameter:(double)a1;
- (id)KCSharingParticipantsFromGroupMembers:(id)a0;
- (id)avatarImageForGroupMember:(id)a0 diameter:(double)a1;
- (id)avatarImageForPrimaryAccountOwnerWithDiameter:(double)a0;
- (id)displayNameForOriginalContributorParticipantID:(id)a0 inGroupID:(id)a1;
- (id)groupMemberDataForGroup:(id)a0;
- (id)groupMemberDataForGroupParticipants:(id)a0;
- (id)groupMemberDataForRecipients:(id)a0;
- (id)placeholderAvatarImageWithDiameter:(double)a0;
- (id)_contactDisplayNameFromNameComponents:(id)a0;
- (id)_contactForCurrentUser;
- (id)_formattedAddressForAddress:(id)a0;
- (id)_renderingScopeForDiameter:(double)a0;
- (id)_shortContactDisplayNameFromNameComponents:(id)a0;
- (id)avatarImageForUserHandle:(id)a0 diameter:(double)a1;
- (id)fetchContactForUserHandle:(id)a0;
- (id)nameForOriginalContributorParticipantID:(id)a0 inGroupID:(id)a1;

@end
