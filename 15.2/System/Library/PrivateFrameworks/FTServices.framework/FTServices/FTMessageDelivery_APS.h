@class NSString, NSMutableArray, NSMutableDictionary;
@protocol FTMessageDeliveryAPSConnection, FTMessageDeliveryAPSMobileNetworkManager;

@interface FTMessageDelivery_APS : FTMessageDelivery <FTMessageQueueDelegate, APSConnectionDelegate> {
    id<FTMessageDeliveryAPSConnection> _connection;
    id<FTMessageDeliveryAPSMobileNetworkManager> _mobileNetworkManager;
    Class _APSOutgoingMessageClass;
    NSMutableArray *_enabledTopics;
    NSMutableDictionary *_ftMessageMap;
    NSMutableDictionary *_startDateMap;
    NSMutableDictionary *_bodyMap;
    NSMutableDictionary *_apsMessageMap;
    NSMutableDictionary *_timerMap;
    NSMutableDictionary *_deathTimerMap;
    NSMutableDictionary *_retriesMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)queue:(id)a0 hitTimeoutForMessage:(id)a1;
- (long long)maxMessageSize;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (id)allMessages;
- (BOOL)busy;
- (void)cancelMessage:(id)a0;
- (BOOL)sendMessage:(id)a0;
- (void)_noteMessageFailed:(id)a0 ftMessage:(id)a1 retryBehavior:(int)a2 error:(id)a3;
- (void)_messageAckGracePeriodTimedOut:(id)a0;
- (void)_noteMessageSucceeded:(id)a0 ftMessage:(id)a1 error:(id)a2 result:(id)a3 resultCode:(long long)a4;
- (void)_dequeueIfNeeded;
- (BOOL)_shouldSendSOSForFailure:(id)a0;
- (id)_messageForAPSOutgoingMessage:(id)a0;
- (void)_messageCompletelyTimedOut:(id)a0;
- (BOOL)_isBusyWithMessage:(id)a0;
- (BOOL)_fillMessageParameters:(id *)a0 ftMessage:(id *)a1;
- (void)connection:(id)a0 didChangeConnectedStatus:(BOOL)a1;
- (id)_apsOutgoingMessageForFTMessage:(id)a0;
- (void)_invalidateTimerForMessageID:(id)a0;
- (id)_currentAPSMessages;
- (BOOL)_sendMessageAsynchronously:(id)a0 error:(id *)a1;
- (void)_invalidateDeathTimerForMessageID:(id)a0;
- (void)connection:(id)a0 didFailToSendOutgoingMessage:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)_updateTopics;
- (void)_noteMessageSent:(id)a0 ftMessage:(id)a1 body:(id)a2;
- (id)init;
- (void)_notifyDelegateAboutError:(id)a0 resultCode:(long long)a1 forMessage:(id)a2;
- (void)_powerLogEvent:(id)a0 dictionary:(id)a1;
- (void)_setMapForMessage:(id)a0 apsMessage:(id)a1 messageBody:(id)a2 timeoutTime:(double)a3 timeoutSelector:(SEL)a4 retries:(id)a5;
- (void)_messageNeedsRetry:(id)a0;
- (void)_setEnabledTopics:(id)a0;
- (id)_apsMessageForMessage:(id)a0 body:(id)a1;
- (id)_currentTimers;
- (id)_currentMessages;
- (void)invalidate;
- (id)connection;
- (void)_serverBagLoaded:(id)a0;
- (long long)_retryCountForMessage:(id)a0;
- (void)_clearMapForMessageID:(id)a0;
- (void)_messageACKTimedOut:(id)a0;
- (id)_bodyForMessage:(id)a0;
- (id)_requiredTopics;
- (void)_noteMessageACKd:(id)a0 ftMessage:(id)a1;
- (void)dealloc;
- (void)_messageSendTimedOut:(id)a0;
- (long long)maxLargeMessageSize;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (id)_apsMessageBodyForMessage:(id)a0;
- (id)initWithAPSConnection:(id)a0 mobileNetworkManager:(id)a1;
- (void)_sendMessage:(id)a0 ftMessage:(id)a1;
- (void)connection:(id)a0 didSendOutgoingMessage:(id)a1;

@end
