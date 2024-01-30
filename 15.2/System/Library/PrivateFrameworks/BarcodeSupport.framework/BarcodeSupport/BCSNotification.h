@class UNNotificationRequest, NSString, NSMutableDictionary, BCSAction, BCSNotificationIcon;

@interface BCSNotification : NSObject {
    BCSAction *_action;
    NSString *_identifier;
    BCSNotificationIcon *_attachmentIcon;
    NSMutableDictionary *_localActions;
}

@property (readonly, nonatomic) long long codeType;
@property (readonly, nonatomic) BOOL shouldSkipBanner;
@property (readonly, nonatomic) UNNotificationRequest *request;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) int requestingProcessID;
@property (readonly, nonatomic) BOOL canHandleActionLocally;

+ (id)tempVCardFileURL;
+ (id)notificationForAction:(id)a0;
+ (id)_tlAlertConfiguration;

- (id)_title;
- (id)_content;
- (void).cxx_destruct;
- (id)_defaultURL;
- (id)_initWithAction:(id)a0;
- (id)_actionTypeStringForQRCode;
- (id)_actionTypeStringForNFC;
- (BOOL)_shouldRequireUserToPickTargetApp;
- (id)_notificationActionFromActionPickerItem:(id)a0;
- (BOOL)_shouldHandleActionPickerItemLocally:(id)a0;
- (id)_actionDescriptionString;
- (BOOL)_contentIsPreviewable;
- (BOOL)_shouldManuallyRequireAuthenticationForURL:(id)a0;
- (id)_supplementActions;
- (id)_fbOptionsHandlingUnlockIfNecessary;
- (BOOL)shouldHandleBulletinActionWithIdentifier:(id)a0;
- (void)_handleCalendarEventWithICSString:(id)a0;
- (void)_performActionAfterUnlock:(id /* block */)a0;
- (void)_handleContactInfo:(id)a0;
- (void)_showAppPickerAlertWithFBOptions:(id)a0;
- (id)_contentExtensionData;
- (id)_attachmentIconURL;
- (BOOL)_shouldScheduleBackgroundActionForLaunchBundleID:(id)a0;
- (id)_orderAppLinkActionsByRecency:(id)a0;
- (id)_pickerLabelForURLActionPickerItem:(id)a0;
- (void)handleActionWithIdentifier:(id)a0 notificationResponseOriginID:(id)a1;
- (void)didHandleBulletinActionWithIdentifier:(id)a0;

@end
