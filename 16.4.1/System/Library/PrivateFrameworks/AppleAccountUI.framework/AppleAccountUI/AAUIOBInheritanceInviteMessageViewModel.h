@class NSString, AACustodianshipInfo, UIImage, UIView;

@interface AAUIOBInheritanceInviteMessageViewModel : AAOBInheritanceInviteMessageModel <AAUIOBWelcomeControllerViewModelProtocol>

@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) UIView *contentView;
@property (copy, nonatomic) UIView *secondaryView;
@property (nonatomic) long long contentViewLayout;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSString *primaryButton;
@property (copy, nonatomic) NSString *secondaryButton;
@property (copy, nonatomic) NSString *leftBarButton;
@property (copy, nonatomic) NSString *helpLinkTitle;
@property (copy, nonatomic) NSString *helpLinkURL;
@property (copy, nonatomic) NSString *ownerHandle;
@property (copy, nonatomic) NSString *recipientHandle;
@property (copy, nonatomic) AACustodianshipInfo *custodianshipInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBeneficiaryName:(id)a0;

@end
