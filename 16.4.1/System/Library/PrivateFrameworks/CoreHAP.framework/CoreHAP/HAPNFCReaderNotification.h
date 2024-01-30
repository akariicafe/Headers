@class HAPNFCReaderXPC;

@interface HAPNFCReaderNotification : HMFObject <HAPNFCReaderStream>

@property (retain) HAPNFCReaderXPC *nfcHomeKit;
@property (retain) HAPNFCReaderXPC *tagProxCard;

+ (void)start;

- (void)nfcStreamIndicationFromSource:(unsigned long long)a0 withPayload:(id)a1;
- (id)_initializeNFCStream:(id)a0 withSource:(unsigned long long)a1 workQueue:(id)a2 backgroundReadingSuported:(BOOL)a3;
- (void)_initializeProxCardStreamWithQueue:(id)a0 backgroundReadingSuported:(BOOL)a1;
- (void)_initializeHomeKitNFCStreamWithQueue:(id)a0 backgroundReadingSupported:(BOOL)a1;
- (id)init;
- (void)_sendHomeNotificationForSource:(unsigned long long)a0 withDictionary:(id)a1;
- (id)setupNotificationDictionaryWithNFCData:(id)a0;
- (void).cxx_destruct;

@end
