@interface AFUIStarkUtilities : NSObject

+ (BOOL)isRequestForAnnounceNotification:(id)a0;
+ (BOOL)isRequestForMessageReadBannerTap:(id)a0;
+ (BOOL)shouldPresentForNewRequest:(id)a0 duringCurrentRequest:(id)a1;
+ (BOOL)shouldStartNewRequest:(id)a0 duringCurrentRequest:(id)a1;
+ (long long)backgroundViewModeForRequestSource:(long long)a0 directActionEvent:(long long)a1;
+ (BOOL)isRequestForAnnnounceNotificationServerCommand:(id)a0;

@end
