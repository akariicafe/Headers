@interface ATXPrivacyReset : NSObject {
    id _resetPrivacyWarningsNotificationToken;
}

+ (id)sharedInstance;

- (id)_placeholderPath;
- (void)_removeAllAppActionData;
- (void)_registerForResetPrivacyWarningsNotification;
- (void)_handlePrivacyResetNotification;
- (void).cxx_destruct;
- (id)init;
- (void)_removeAllBlendingUICaches;
- (void)_writeDeletionPlaceholder;
- (void)dealloc;
- (BOOL)_placeholderExists;

@end
