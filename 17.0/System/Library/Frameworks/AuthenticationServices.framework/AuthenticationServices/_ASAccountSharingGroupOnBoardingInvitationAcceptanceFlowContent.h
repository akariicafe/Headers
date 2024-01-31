@class UIImage, NSString;

@interface _ASAccountSharingGroupOnBoardingInvitationAcceptanceFlowContent : NSObject

@property (class, readonly, copy, nonatomic) UIImage *headerImageForWelcomeView;
@property (class, readonly, copy, nonatomic) UIImage *firstBulletImageForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *firstBulletTitleForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *firstBulletDescriptionForWelcomeView;
@property (class, readonly, copy, nonatomic) UIImage *secondBulletImageForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *secondBulletTitleForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *secondBulletDescriptionForWelcomeView;
@property (class, readonly, copy, nonatomic) UIImage *thirdBulletImageForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *thirdBulletTitleForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *thirdBulletDescriptionForWelcomeView;
@property (class, readonly, copy, nonatomic) NSString *headerTitleForMovingCredentialsToGroup;
@property (class, readonly, copy, nonatomic) UIImage *headerImageForMovingCredentialsToGroup;
@property (class, readonly, copy, nonatomic) NSString *headerTitleForRemovingDuplicateCredentialsInGroup;
@property (class, readonly, copy, nonatomic) UIImage *headerImageForRemovingDuplicateCredentialsInGroup;

+ (id)descriptionForRemovingDuplicateCredentialsInGroup:(id)a0;
+ (id)_bulletListItemImageConfiguration;
+ (id)_headerImageForString:(id)a0;
+ (id)descriptionForMovingCredentialsToGroup:(id)a0;
+ (id)headerSubtitleForRemovingDuplicateCredentialsInGroup:(id)a0;
+ (id)headerTitleForWelcomeViewWithGroupName:(id)a0;

@end
