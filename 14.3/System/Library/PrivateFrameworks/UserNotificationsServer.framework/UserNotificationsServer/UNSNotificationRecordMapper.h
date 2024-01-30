@class BSCFBundle, UNSNotificationCategoryRepository;

@interface UNSNotificationRecordMapper : NSObject {
    BSCFBundle *_bundle;
    UNSNotificationCategoryRepository *_categoryRepository;
}

- (void).cxx_destruct;
- (id)_notificationTriggerForNotificationRecord:(id)a0;
- (id)_notificationSoundForNotificationRecord:(id)a0;
- (id)notificationForNotificationRecord:(id)a0;
- (id)_notificationIconForNotificationRecord:(id)a0;
- (id)initWithBundle:(id)a0 categoryRepository:(id)a1;
- (id)_notificationContentForNotificationRecord:(id)a0;
- (id)notificationRequestForNotificationRecord:(id)a0;

@end
