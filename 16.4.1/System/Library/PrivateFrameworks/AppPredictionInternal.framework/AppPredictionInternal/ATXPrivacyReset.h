@interface ATXPrivacyReset : NSObject {
    id _resetPrivacyWarningsNotificationToken;
}

+ (id)sharedInstance;

- (void)_writeDeletionPlaceholder;
- (id)_placeholderPath;
- (void)dealloc;
- (void)_removeAllAppActionData;
- (void)_handlePrivacyResetNotification;
- (id)init;
- (BOOL)_placeholderExists;
- (void)_registerForResetPrivacyWarningsNotification;
- (void)_removeAllBlendingUICaches;
- (void).cxx_destruct;

@end
