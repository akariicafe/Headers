@interface ATXPrivacyReset : NSObject {
    id _resetPrivacyWarningsNotificationToken;
}

+ (id)sharedInstance;

- (void)_removeAllBlendingUICaches;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_removeAllAppActionData;
- (id)_placeholderPath;
- (void)_registerForResetPrivacyWarningsNotification;
- (void)_handlePrivacyResetNotification;
- (BOOL)_placeholderExists;
- (void)_writeDeletionPlaceholder;

@end
