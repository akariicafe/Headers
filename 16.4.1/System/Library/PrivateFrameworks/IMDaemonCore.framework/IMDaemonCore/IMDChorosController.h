@class NSDictionary, NSString, CTStewieDataClient;

@interface IMDChorosController : NSObject <CTStewieDataClientDelegate>

@property (retain, nonatomic) CTStewieDataClient *coreTelephonyStewieClient;
@property (copy, nonatomic) NSDictionary *conversationIDToConversationUUIDMap;
@property (nonatomic, getter=isStewieActive) BOOL stewieActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)stateChanged:(id)a0;
- (void)sendEmergencyQuestionnaire:(id)a0;
- (void)processReceivedEmergencyMessageFromIMTool:(long long)a0 message:(id)a1;
- (BOOL)_isMessageStewieEmergencyCompatible:(id)a0;
- (void)setConversationUUID:(id)a0 forConversationID:(long long)a1;
- (id)_simNumber;
- (void)connectedServicesChanged:(long long)a0;
- (void)sendStewieMessage:(id)a0 forChat:(id)a1;
- (void)locationUpdateSent;
- (void)_processReceivedEmergencyMessage:(id)a0;
- (void)_createChatIfNecessary:(id)a0;
- (void)stopTranscriptSharingWithChat:(id)a0;
- (void)_processMessageSent:(id)a0 forSession:(id)a1;
- (id)init;
- (void)_openStewieChat;
- (id)_generateStopTranscriptSharingStatusItemForChat:(id)a0;
- (id)_stringKeyForConversationID:(long long)a0;
- (void)_processMessageSendFailure:(id)a0 forSession:(id)a1;
- (void)messageReceived:(id)a0 withMetadata:(id)a1 completionBlock:(id /* block */)a2;
- (id)_generateLocationUpdateSentStatusItemForChat:(id)a0;
- (void).cxx_destruct;
- (id)conversationUUIDForConversationID:(long long)a0;

@end
