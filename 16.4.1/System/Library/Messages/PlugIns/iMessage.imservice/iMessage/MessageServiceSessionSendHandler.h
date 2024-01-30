@interface MessageServiceSessionSendHandler : NSObject

+ (BOOL)_isDeviceRegisteredForAccount:(id)a0;
+ (void)_fixParticipantsForChat:(id)a0;
+ (void)_startTiming;
+ (void)_stopTiming;
+ (id)_setCallerIDOnMessage:(id)a0 onChat:(id)a1 withIDSAccount:(id *)a2 withServiceSession:(id)a3;
+ (void)_FTAWDLogForMessage:(id)a0 withContext:(id)a1;
+ (id)_buildSendMessageContextWithChatIdentifier:(id)a0 withChatStyle:(unsigned char)a1 withServiceSession:(id)a2 withMessage:(id)a3;
+ (void)_deactivateServiceIfNeededForContext:(id)a0;
+ (void)_deliverMessage:(id)a0 withContext:(id)a1 withBlock:(id /* block */)a2;
+ (void)_didSendMessage:(id)a0 withContext:(id)a1 forceDate:(id)a2 fromStorage:(BOOL)a3;
+ (BOOL)_failSendingMessageIfNeeded:(id)a0 withContext:(id)a1;
+ (void)_handleDeliveryFailureForMessage:(id)a0 withContext:(id)a1;
+ (BOOL)_handleDeviceRegistrationForMessage:(id)a0 withContext:(id)a1;
+ (void)_handleFakeReceiptBlock:(id)a0 withContext:(id)a1 withMsg:(id)a2;
+ (void)_handleIsMeToMeForMessage:(id)a0 withContext:(id)a1;
+ (void)_handleMessageSentToSelf:(id)a0 withContext:(id)a1 isLocal:(BOOL)a2;
+ (BOOL)_handleTypingIndicatorMessage:(id)a0 withContext:(id)a1;
+ (void)_handleUpdateNotificationTimeManagerForMessage:(id)a0 withContext:(id)a1;
+ (void)_initiateTelephonyConversationForMessage:(id)a0 chatIdentifier:(id)a1 chatStyle:(unsigned char)a2 onSession:(id)a3;
+ (id)_lastAddressedURIForChatLogMetricIfNeededOnChat:(id)a0 withIDSAccount:(id *)a1 withServiceSession:(id)a2 shouldLog:(BOOL)a3;
+ (void)_logCompletedMessage:(id)a0 withContext:(id)a1;
+ (void)_notifyDidSendMessage:(id)a0 withContext:(id)a1;
+ (void)_notifyNameAndPhotoControllerOfMessage:(id)a0 onChat:(id)a1;
+ (void)_notifyOfSendMessage:(id)a0 withContext:(id)a1;
+ (id)_processMessageForSending:(id)a0 withContext:(id)a1;
+ (id)_processMessageForSendingToGroupIfNeeded:(id)a0 withContext:(id)a1;
+ (void)_refreshGroupPhotoTTLIfNecessary:(id)a0 withContext:(id)a1;
+ (BOOL)_shouldInitiateTelephonyConversationForMessage:(id)a0;
+ (BOOL)_shouldOverrideTypingIndicator;
+ (BOOL)_shouldSendAppTypingIndicator;
+ (void)_storeMessage:(id)a0 withContext:(id)a1;
+ (void)_updateBlackholeStatusIfNeededWithMessage:(id)a0 withContext:(id)a1;
+ (void)_updateLastDeviceActivityForCloudKit;
+ (void)sendMessage:(id)a0 toChat:(id)a1 style:(unsigned char)a2 onSession:(id)a3;

@end
