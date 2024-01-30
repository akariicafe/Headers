@class BCSNotificationServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BCSNFCReaderConnection : NSObject {
    BCSNotificationServiceConnection *_notificationServiceConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)disconnect;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_isNFCEnabled;
- (BOOL)_needsRadioEnabledCheck;
- (BOOL)_enableNFC;
- (long long)_hardwareSupportState;
- (void)checkNFCEnabledWithCompletionHandler:(id /* block */)a0;
- (void)enableNFCWithCompletionHandler:(id /* block */)a0;
- (void)checkHardwareSupportStateWithCompletionHandler:(id /* block */)a0;
- (void)startReaderWithDelegate:(id)a0 errorHandler:(id /* block */)a1 interruptionHandler:(id /* block */)a2;
- (void)stopReaderWithErrorHandler:(id /* block */)a0;

@end
