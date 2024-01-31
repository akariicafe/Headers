@class UIImage, NSString;

@interface _ASAccountSharingGroupOnBoardingCreateGroupContent : NSObject

@property (class, readonly, copy, nonatomic) UIImage *headerImage;
@property (class, readonly, copy, nonatomic) NSString *headerTitle;
@property (class, readonly, copy, nonatomic) UIImage *firstBulletImage;
@property (class, readonly, copy, nonatomic) NSString *firstBulletTitle;
@property (class, readonly, copy, nonatomic) NSString *firstBulletDescription;
@property (class, readonly, copy, nonatomic) UIImage *secondBulletImage;
@property (class, readonly, copy, nonatomic) NSString *secondBulletTitle;
@property (class, readonly, copy, nonatomic) NSString *secondBulletDescription;
@property (class, readonly, copy, nonatomic) UIImage *thirdBulletImage;
@property (class, readonly, copy, nonatomic) NSString *thirdBulletTitle;
@property (class, readonly, copy, nonatomic) NSString *thirdBulletDescription;

+ (id)_bulletListItemImageConfiguration;

@end
