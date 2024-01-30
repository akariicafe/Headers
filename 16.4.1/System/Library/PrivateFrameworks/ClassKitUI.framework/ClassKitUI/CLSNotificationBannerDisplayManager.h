@class NSDate;

@interface CLSNotificationBannerDisplayManager : NSObject

@property (retain, nonatomic) NSDate *lastBannerTime;

+ (id)shared;

- (void).cxx_destruct;
- (void)showPrivacyModalViewWithInfo:(id)a0;
- (void)showBannerWithTitle:(id)a0 message:(id)a1;

@end
