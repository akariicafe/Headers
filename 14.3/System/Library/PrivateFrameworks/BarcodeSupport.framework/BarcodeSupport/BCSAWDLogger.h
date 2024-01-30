@interface BCSAWDLogger : NSObject

+ (id)sharedLogger;

- (void)logBarcodeActivatedEventForAction:(id)a0;
- (int)_awdBarcodeClientType;
- (int)_awdBarcodeSourceTypeForAction:(id)a0;
- (int)_awdBarcodeDataTypeFromAction:(id)a0;
- (int)_awdInvalidBarcodeDataTypeFromInvalidData:(id)a0;
- (int)_awdBarcodeURLTypeFromURLAction:(id)a0;
- (int)_awdBarcodePreferredAppLinkOpenStrategyFromURLAction:(id)a0;
- (id)barcodeDetectedEventForAction:(id)a0;
- (void)logBarcodeDetectedEvent:(id)a0 startTime:(unsigned long long)a1;
- (void)logBarcodeDetectedEventForAction:(id)a0 startTime:(unsigned long long)a1;
- (void)logBarcodePreviewedEventForContentType:(long long)a0;

@end
