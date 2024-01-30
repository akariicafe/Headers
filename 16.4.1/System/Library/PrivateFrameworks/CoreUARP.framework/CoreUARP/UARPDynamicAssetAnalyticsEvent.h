@class NSURL, UARPSuperBinaryAsset, NSMutableArray;

@interface UARPDynamicAssetAnalyticsEvent : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_events;
}

+ (id)tag;

- (id)initWithURL:(id)a0;
- (void)send;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)decomposeUARP;

@end
