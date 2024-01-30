@class NSString, NSDictionary, NSURL, UARPSuperBinaryAsset;

@interface UARPDynamicAssetAnalyticsEvent : NSObject {
    NSURL *_url;
    NSString *_eventName;
    NSDictionary *_eventDictionary;
    UARPSuperBinaryAsset *_asset;
}

- (void)send;
- (id)initWithURL:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (BOOL)decomposeUARP;

@end
