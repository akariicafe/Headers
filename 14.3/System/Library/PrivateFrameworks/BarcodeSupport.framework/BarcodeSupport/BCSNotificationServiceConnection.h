@class NSXPCConnection;

@interface BCSNotificationServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *serviceConnection;
@property (copy, nonatomic) id /* block */ interruptionHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveNotificationResponse:(id)a0;
- (void)startNFCReaderWithDelegate:(id)a0 errorHandler:(id /* block */)a1;
- (void)stopNFCReaderWithErrorHandler:(id /* block */)a0;
- (void)cancelNotificationsForCodeType:(long long)a0;
- (void)notifyParsedCodeWithData:(id)a0 codePayload:(id)a1 shouldReplacePreviousNotifications:(BOOL)a2 withReply:(id /* block */)a3;

@end
