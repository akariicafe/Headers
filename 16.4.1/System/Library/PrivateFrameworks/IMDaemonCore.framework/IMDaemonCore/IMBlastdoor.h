@interface IMBlastdoor : NSObject

+ (id)logger;
+ (void)sendSMSDictionary:(id)a0 withCompletionBlock:(id /* block */)a1;
+ (BOOL)_commandReadyForBlastdoor:(long long)a0;
+ (BOOL)supportsFeature:(id)a0;
+ (void)sendClearNoticeData:(id)a0 withCompletionBlock:(id /* block */)a1;
+ (id)blastdoorInterface;
+ (void)sendCollaborationNoticeData:(id)a0 withCompletionBlock:(id /* block */)a1;
+ (BOOL)_messageBlastdoorMetricsEnabled;
+ (void)sendBlastDoorError:(id)a0 guid:(id)a1 messageTypeString:(id)a2 senderURI:(id)a3 senderToken:(id)a4 messageContext:(id)a5 payloadAttachmentURL:(id)a6;
+ (long long)_convertErrorToBlastdoorError:(id)a0;
+ (void)_askToTapToRadarForGUID:(id)a0 messageTypeString:(id)a1 sender:(id)a2 errorString:(id)a3 payloadAttachmentURL:(id)a4;
+ (void)sendDictionary:(id)a0 withCompletionBlock:(id /* block */)a1;
+ (void)sendCollaborationNoticeActionDictionary:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
