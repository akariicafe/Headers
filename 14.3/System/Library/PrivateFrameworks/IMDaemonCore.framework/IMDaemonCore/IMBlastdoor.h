@interface IMBlastdoor : NSObject

+ (id)blastdoorInterface;
+ (BOOL)_messageBlastdoorMetricsEnabled;
+ (void)sendDictionary:(id)a0 withCompletionBlock:(id /* block */)a1;
+ (void)sendBlastDoorError:(id)a0 guid:(id)a1 command:(id)a2 senderURI:(id)a3 senderToken:(id)a4 messageContext:(id)a5 payloadAttachmentURL:(id)a6;
+ (long long)_convertErrorToBlastdoorError:(id)a0;
+ (id)logger;
+ (BOOL)_commandReadyForBlastdoor:(long long)a0;
+ (BOOL)supportsFeature:(id)a0;
+ (void)_askToTapToRadarForGUID:(id)a0 command:(id)a1 sender:(id)a2 errorString:(id)a3 payloadAttachmentURL:(id)a4;

@end
