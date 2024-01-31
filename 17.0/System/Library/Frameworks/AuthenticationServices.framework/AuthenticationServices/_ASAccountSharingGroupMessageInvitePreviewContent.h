@class UIImage, NSString;

@interface _ASAccountSharingGroupMessageInvitePreviewContent : NSObject

@property (class, readonly, copy, nonatomic) UIImage *headerImage;
@property (class, readonly, copy, nonatomic) NSString *sendMessageButtonTitle;
@property (class, readonly, copy, nonatomic) NSString *notNowButtonTitle;
@property (class, readonly, copy, nonatomic) NSString *cancelButtonTitle;

+ (id)headerSubtitleForInvitedGroupMemberData:(id)a0;
+ (id)headerTitleForInvitedGroupMemberData:(id)a0;
+ (id)_genericHeaderSubtitle;

@end
