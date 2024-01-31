@class UIImage, NSString;

@interface _ASAccountSharingGroupInvitationContent : NSObject

@property (class, readonly, copy, nonatomic) UIImage *knownSenderHeaderImage;
@property (class, readonly, copy, nonatomic) NSString *unknownSenderHeaderTitle;
@property (class, readonly, copy, nonatomic) NSString *unknownSenderHeaderSubtitle;
@property (class, readonly, copy, nonatomic) UIImage *unknownSenderHeaderImage;
@property (class, readonly, copy, nonatomic) NSString *unknownSenderCellTitle;
@property (class, readonly, copy, nonatomic) UIImage *unknownSenderCellImage;
@property (class, readonly, copy, nonatomic) NSString *acceptButtonTitle;
@property (class, readonly, copy, nonatomic) NSString *cancelButtonTitle;
@property (class, readonly, copy, nonatomic) NSString *declineButtonTitle;
@property (class, readonly, copy, nonatomic) NSString *dismissButtonTitle;
@property (class, readonly, copy, nonatomic) NSString *viewButtonTitle;
@property (class, readonly, copy, nonatomic) UIImage *linkPresentationBubbleIcon;
@property (class, readonly, copy, nonatomic) NSString *linkPresentationBubbleTitle;

+ (id)groupMemberListFooterTextForPermissionLevel:(long long)a0;
+ (id)invitationDescriptionForOwner:(id)a0;
+ (id)knownSenderHeaderSubtitleForPermissionLevel:(long long)a0;
+ (id)knownSenderHeaderTitleWithGroupName:(id)a0;
+ (id)linkPresentationBubbleSubtitleForGroupName:(id)a0 groupOwnerName:(id)a1;
+ (id)_headerImageWithSymbolNamed:(id)a0;

@end
