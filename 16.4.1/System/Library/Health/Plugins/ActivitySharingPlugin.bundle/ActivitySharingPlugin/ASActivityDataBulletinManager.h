@class NSString;
@protocol ASBulletinPostingManager;

@interface ASActivityDataBulletinManager : NSObject <ASActivitySharingManagerReadyObserver> {
    id<ASBulletinPostingManager> _notificationPostingManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activitySharingManagerReady:(id)a0;
- (void)showActivityNotifications:(id)a0 withPostingStyle:(long long)a1;
- (void).cxx_destruct;

@end
