@protocol WLKNotificationsImpl, WLKNotificationCenterDelegate;

@interface WLKNotificationCenter : NSObject {
    id<WLKNotificationsImpl> _impl;
}

@property (weak, nonatomic) id<WLKNotificationCenterDelegate> delegate;

+ (id)defaultCenter;

- (BOOL)isCategoryBadgeSettingEnabledByUser:(long long)a0;
- (void)setBadgeNumber:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)post:(id)a0 title:(id)a1 body:(id)a2 options:(id)a3;
- (id)init;
- (BOOL)isCategoryEnabledByUser:(long long)a0;
- (void)setBadgeString:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
