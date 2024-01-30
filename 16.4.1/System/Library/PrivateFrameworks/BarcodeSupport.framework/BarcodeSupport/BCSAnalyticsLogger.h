@class NSObject;
@protocol OS_dispatch_queue;

@interface BCSAnalyticsLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedLogger;

- (id)_initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)_stringForDataType:(long long)a0;
- (void)_sendEventLazyWithName:(id)a0 payload:(id)a1;
- (id)_eventPayloadForAction:(id)a0;
- (id)_stringForCodeType:(long long)a0;
- (void)didActivateNFCReader;
- (void)didScanNFCTagOfType:(long long)a0;
- (void)logBarcodeActivatedEventForAction:(id)a0;
- (void)logBarcodeDetectedEventForAction:(id)a0 fromBundleID:(id)a1;
- (void)logBarcodeDetectedEventForAction:(id)a0 startTime:(unsigned long long)a1;
- (void)logBarcodePreviewedEventForContentType:(long long)a0;

@end
