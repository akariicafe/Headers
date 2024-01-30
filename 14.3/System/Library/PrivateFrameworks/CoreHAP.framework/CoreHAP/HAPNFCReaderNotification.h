@class HAPNFCReaderXPC;

@interface HAPNFCReaderNotification : HMFObject <HAPNFCReaderStream>

@property (retain) HAPNFCReaderXPC *nfcHomeKit;
@property (retain) HAPNFCReaderXPC *tagProxCard;

+ (void)start;

- (id)init;
- (void).cxx_destruct;
- (void)nfcStreamIndicationFromSource:(unsigned long long)a0 withPayload:(id)a1;
- (void)_initializeHomeKitNFCStreamWithQueue:(id)a0;
- (void)_sendHomeNotificationForSource:(unsigned long long)a0 withDictionary:(id)a1;
- (id)_initializeNFCStream:(id)a0 withSource:(unsigned long long)a1 workQueue:(id)a2;
- (void)_initializeProxCardStreamWithQueue:(id)a0;
- (BOOL)_supportsBackgroundReading;
- (id)setupNotificationDictionaryWithNFCData:(id)a0;

@end
