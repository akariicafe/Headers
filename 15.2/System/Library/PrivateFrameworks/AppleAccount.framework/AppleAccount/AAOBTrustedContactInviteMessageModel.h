@class NSString, AACustodianshipInfo;

@interface AAOBTrustedContactInviteMessageModel : NSObject <AAOBTrustedContactInviteMessageModelProtocol, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSString *primaryButton;
@property (copy, nonatomic) NSString *secondaryButton;
@property (copy, nonatomic) NSString *helpLinkTitle;
@property (copy, nonatomic) NSString *helpLinkURL;
@property (copy, nonatomic) NSString *ownerHandle;
@property (copy, nonatomic) NSString *recipientHandle;
@property (copy, nonatomic) AACustodianshipInfo *custodianshipInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
