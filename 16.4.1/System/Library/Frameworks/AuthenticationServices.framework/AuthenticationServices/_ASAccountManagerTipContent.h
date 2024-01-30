@class UIImage, NSString;

@interface _ASAccountManagerTipContent : NSObject

@property (readonly, copy, nonatomic) UIImage *image;
@property (readonly, nonatomic) BOOL hasBorderedImage;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *buttonTitle;
@property (readonly, copy, nonatomic) NSString *declineButtonTitle;

+ (id)contentForTipType:(long long)a0;
+ (id)_contentForiCloudKeychainTip;
+ (id)_iCloudKeychainTipButtonTitle;
+ (id)_iCloudKeychainTipDeclineButtonTitle;
+ (BOOL)_iCloudKeychainTipHasBorderedImage;
+ (id)_iCloudKeychainTipImage;
+ (id)_iCloudKeychainTipSubtitle;
+ (id)_iCloudKeychainTipTitle;

- (void).cxx_destruct;
- (id)_initWithImage:(id)a0 hasBorderedImage:(BOOL)a1 title:(id)a2 subtitle:(id)a3 buttonTitle:(id)a4 declineButtonTitle:(id)a5;

@end
