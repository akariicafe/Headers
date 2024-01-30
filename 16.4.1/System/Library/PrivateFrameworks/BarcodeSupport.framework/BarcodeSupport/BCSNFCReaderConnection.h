@class BCSNotificationServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BCSNFCReaderConnection : NSObject {
    BCSNotificationServiceConnection *_notificationServiceConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (BOOL)_isNFCEnabled;
- (BOOL)_needsRadioEnabledCheck;
- (void)disconnect;
- (BOOL)_enableNFC;
- (void)stopReaderWithErrorHandler:(id /* block */)a0;
- (long long)_hardwareSupportState;
- (void)checkHardwareSupportStateWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)checkNFCEnabledWithCompletionHandler:(id /* block */)a0;
- (void)startReaderWithDelegate:(id)a0 errorHandler:(id /* block */)a1 interruptionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)enableNFCWithCompletionHandler:(id /* block */)a0;

@end
