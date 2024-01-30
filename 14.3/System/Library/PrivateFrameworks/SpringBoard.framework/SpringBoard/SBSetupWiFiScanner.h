@class NSThread;

@interface SBSetupWiFiScanner : NSObject {
    struct __WiFiManagerClient { } *_wifiManager;
    struct __WiFiDeviceClient { } *_wifiDevice;
}

@property (retain, getter=_scanningThread, setter=_setScanningThread:) NSThread *scanningThread;
@property (copy, getter=_completionHandler, setter=_setCompletionHandler:) id /* block */ completionHandler;
@property (nonatomic, getter=_state, setter=_setState:) long long state;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)beginScanningWithCompletionHandler:(id /* block */)a0;
- (void)_thread_closeWifiConnection;
- (void)_wifiScanningThread;
- (void)_thread_callCompletionHandlerWithGuessedCountries:(id)a0;
- (void)_thread_cancelScanning;
- (void)_thread_wifiScanComplete:(struct __CFArray { } *)a0 error:(BOOL)a1;

@end
