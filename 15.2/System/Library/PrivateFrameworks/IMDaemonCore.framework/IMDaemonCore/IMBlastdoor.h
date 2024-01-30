@interface IMBlastdoor : NSObject

+ (id)logger;
+ (BOOL)supportsFeature:(id)a0;
+ (void)sendBlastDoorError:(id)a0 guid:(id)a1 messageTypeString:(id)a2 senderURI:(id)a3 senderToken:(id)a4 messageContext:(id)a5 payloadAttachmentURL:(id)a6;
+ (void)sendDictionary:(id)a0 withCompletionBlock:(id /* block */)a1;
+ (long long)_convertErrorToBlastdoorError:(id)a0;
+ (BOOL)_commandReadyForBlastdoor:(long long)a0;
+ (BOOL)_messageBlastdoorMetricsEnabled;
+ (void)sendSMSDictionary:(id)a0 withCompletionBlock:(id /* block */)a1;
+ (void)_askToTapToRadarForGUID:(id)a0 messageTypeString:(id)a1 sender:(id)a2 errorString:(id)a3 payloadAttachmentURL:(id)a4;
+ (id)blastdoorInterface;

@end
