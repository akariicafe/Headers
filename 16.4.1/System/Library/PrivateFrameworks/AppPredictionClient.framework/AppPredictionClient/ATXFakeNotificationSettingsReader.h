@class NSString, NSArray, NSMutableDictionary;

@interface ATXFakeNotificationSettingsReader : NSObject <ATXNotificationSettingsReaderProtocol> {
    BOOL _defaultIsAppAllowed;
    BOOL _defaultIsContactAllowed;
    NSArray *_digestDeliveryTimes;
    NSMutableDictionary *_entityToIsAllowed;
    NSMutableDictionary *_sendToDigest;
    NSMutableDictionary *_messagesBreakthrough;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)numConfiguredModes;
- (BOOL)doesAppSendNotificationsToDigest:(id)a0;
- (BOOL)digestSetupComplete;
- (id)modeConfiguration:(id)a0;
- (id)notificationDigestDeliveryTimes;
- (BOOL)contactIsOnAllowList:(id)a0 dndModeUUID:(id)a1;
- (BOOL)appIsOnDenyList:(id)a0 dndModeUUID:(id)a1;
- (BOOL)appIsOnAllowList:(id)a0 dndModeUUID:(id)a1;
- (id)allConfiguredDigestApps;
- (unsigned long long)senderConfigurationTypeForDNDModeUUID:(id)a0 success:(BOOL *)a1;
- (id)init;
- (BOOL)contactIsOnDenyList:(id)a0 dndModeUUID:(id)a1;
- (BOOL)doesAppAllowMessageBreakthrough:(id)a0;
- (unsigned long long)applicationConfigurationTypeForDNDModeUUID:(id)a0 success:(BOOL *)a1;
- (void).cxx_destruct;
- (BOOL)appIsOnAllowList:(id)a0 mode:(unsigned long long)a1;
- (BOOL)contactIsOnAllowList:(id)a0 mode:(unsigned long long)a1;
- (void)setDefaultNotificationDigestDeliveryTimes:(id)a0;
- (void)setDefaultReturnValueForAppIsAllowed:(BOOL)a0;
- (void)setDefaultReturnValueForContactIsAllowed:(BOOL)a0;
- (void)setDoMessagesBreakthrough:(id)a0 doesBreakthrough:(BOOL)a1;
- (void)setDoesSendToDigest:(id)a0 doesSend:(BOOL)a1;
- (void)setIsAllowedForEntity:(id)a0 isAllowed:(BOOL)a1;

@end
