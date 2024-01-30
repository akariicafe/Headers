@class NSMutableDictionary;

@interface NUAdStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *ads;

- (id)init;
- (void).cxx_destruct;
- (void)addAd:(id)a0;
- (id)allAds;
- (id)adsForState:(unsigned long long)a0;
- (void)removeAd:(id)a0;

@end
