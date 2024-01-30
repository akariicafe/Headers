@interface TSNotificationService : NSObject <TSNotificationServiceLegacyType, UNUserNotificationCenterDelegate> {
    void /* unknown type, empty encoding */ options;
}

- (id)init;
- (void)fetchNotificationSettingsWith:(id /* block */)a0;

@end
