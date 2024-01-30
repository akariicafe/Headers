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

+ (id)_tlAlertConfiguration;
+ (id)notificationForAction:(id)a0;
+ (id)tempVCardFileURL;

- (id)_title;
- (void).cxx_destruct;
- (id)_content;
- (id)_defaultURL;
- (id)_actionDescriptionString;
- (id)_actionTypeStringForNFC;
- (id)_actionTypeStringForQRCode;
- (id)_attachmentIconURL;
- (id)_contentExtensionData;
- (BOOL)_contentIsPreviewable;
- (id)_fbOptionsHandlingUnlockIfNecessary;
- (void)_handleCalendarEventWithICSString:(id)a0;
- (void)_handleContactInfo:(id)a0;
- (id)_initWithAction:(id)a0;
- (id)_notificationActionFromActionPickerItem:(id)a0;
- (id)_orderAppLinkActionsByRecency:(id)a0;
- (void)_performActionAfterUnlock:(id /* block */)a0;
- (id)_pickerLabelForURLActionPickerItem:(id)a0;
- (BOOL)_shouldHandleActionPickerItemLocally:(id)a0;
- (BOOL)_shouldManuallyRequireAuthenticationForURL:(id)a0;
- (BOOL)_shouldRequireUserToPickTargetApp;
- (BOOL)_shouldScheduleBackgroundActionForLaunchBundleID:(id)a0;
- (void)_showAppPickerAlertWithFBOptions:(id)a0;
- (id)_supplementActions;
- (void)didHandleBulletinActionWithIdentifier:(id)a0;
- (void)handleActionWithIdentifier:(id)a0 notificationResponseOriginID:(id)a1;
- (BOOL)shouldHandleBulletinActionWithIdentifier:(id)a0;

@end
