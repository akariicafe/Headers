@interface IMPowerLog : NSObject

+ (id)sharedInstance;

- (void)logMessageSendFailureWithError:(id)a0;
- (void)logMessageReceivedWithGUID:(id)a0 fromIdentifier:(id)a1 toIdentifier:(id)a2 conversationType:(unsigned long long)a3 messageType:(unsigned long long)a4;
- (void)logMessageSentWithGUID:(id)a0 fromIdentifier:(id)a1 toIdentifier:(id)a2 conversationType:(unsigned long long)a3 messageType:(unsigned long long)a4 sendDuration:(id)a5 errorCode:(id)a6;

@end
