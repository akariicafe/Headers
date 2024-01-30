@class CARAutomaticDNDStatus, NSString, NSObject;
@protocol OS_dispatch_queue, IMDAutoReplyDelegate;

@interface IMDAvailabilityAutoReplier : NSObject <IMDAutoReplying>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (retain, nonatomic) CARAutomaticDNDStatus *automaticDNDStatus;
@property (weak, nonatomic) id<IMDAutoReplyDelegate> replyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_localDeviceHasSIMMatchingChat:(id)a0;
- (BOOL)_favoritesContainsParticipants:(id)a0;
- (BOOL)_audience:(unsigned long long)a0 allowsRepliesToChat:(id)a1;
- (unsigned long long)_autoReplyAudience;
- (id)_autoReplyMessageTextWithUrgentBreakthroughInstructions:(BOOL)a0;
- (BOOL)_chatEligibleForAvailabilityInformation:(id)a0;
- (BOOL)_contactsContainsParticipants:(id)a0;
- (id)_customizedAutoReplyMessage;
- (BOOL)_deviceIsPhone;
- (BOOL)_deviceSupportsSMSAutoReplyForChat:(id)a0;
- (BOOL)_deviceSupportsiMessageAutoReply;
- (id)_dndHandleForIMDHandle:(id)a0;
- (BOOL)_hasRecentOutgoingMessagesInChat:(id)a0;
- (BOOL)_haveRecentUrgentMessageInGracePeriodForChat:(id)a0;
- (BOOL)_haveRecentlySentUnavailabilityAutoReplyMessageToChat:(id)a0;
- (BOOL)_isInDrivingFocus;
- (BOOL)_isSMSChat:(id)a0;
- (id)_messageGuidsForMessages:(id)a0;
- (BOOL)_messageHasLegacyUrgentTriggerMatchInText:(id)a0;
- (BOOL)_messageIsSOS:(id)a0;
- (BOOL)_messageItemSupportsAvailabilityReply:(id)a0;
- (BOOL)_messageItemSupportsBreakthroughNotification:(id)a0;
- (id)_messageItemsSupportingAvailabilityReplyFromItems:(id)a0;
- (id)_messageItemsSupportingBreakthroughNotifications:(id)a0;
- (BOOL)_messageSenderEligibleToReceiveAvailabilityInformation:(id)a0;
- (void)_processMessagesForAvailabilityAutoReply:(id)a0 forIncomingMessageFromIDSID:(id)a1 inChat:(id)a2;
- (void)_sendDeliveredQuietelyForMessages:(id)a0 forIncomingMessageFromIDSID:(id)a1 inChat:(id)a2;
- (void)_sendTextAutoReplyIfNecessaryForMessages:(id)a0 withUrgentBreakthroughInstructions:(BOOL)a1 inChat:(id)a2;
- (void)_sendTextAutoReplyToChat:(id)a0 withUrgentBreakthroughInstructions:(BOOL)a1;
- (BOOL)_shouldIgnoreDoNotDisturbForMessages:(id)a0 inChat:(id)a1;
- (BOOL)_shouldSendTextAutoReplyForChat:(id)a0;
- (BOOL)_sosTransportValidForMessage:(id)a0;
- (BOOL)_sosURLMatchInText:(id)a0;
- (id)_stringForAutoReplyAudience:(unsigned long long)a0;
- (BOOL)_userIsAvailableToHandle:(id)a0;
- (void)iterateRecentMessagesInChat:(id)a0 withBlock:(id /* block */)a1;
- (void)processMessages:(id)a0 inChat:(id)a1 fromIDSID:(id)a2;

@end
