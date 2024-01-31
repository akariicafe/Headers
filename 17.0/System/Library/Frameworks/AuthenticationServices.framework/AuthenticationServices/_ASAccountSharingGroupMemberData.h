@class NSString, UIImage, CNContact;

@interface _ASAccountSharingGroupMemberData : NSObject

@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *handleForDisplay;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *contactDisplayName;
@property (copy, nonatomic) NSString *shortContactDisplayName;
@property (retain, nonatomic) UIImage *avatarImageForGroupMemberCell;
@property (nonatomic) long long groupPermissionLevel;
@property (nonatomic) BOOL isMeParticipant;
@property (nonatomic) long long inviteStatus;
@property (retain, nonatomic) CNContact *contact;
@property (copy, nonatomic) NSString *participantID;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
