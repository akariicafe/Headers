@class ICURLBag, NSArray, NSDictionary, NSDate, ICStoreHLSAssetInfo;

@interface ICMusicSubscriptionPlaybackResponseItem : NSObject <NSCopying> {
    NSDictionary *_itemResponseDictionary;
    ICURLBag *_urlBag;
}

@property (copy, nonatomic) NSDate *assetExpirationDate;
@property (readonly, nonatomic) long long storeAdamID;
@property (readonly, copy, nonatomic) NSArray *fileAssets;
@property (readonly, copy, nonatomic) ICStoreHLSAssetInfo *hlsAsset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)fileAssetWithFlavorType:(long long)a0;
- (id)initWithItemResponseDictionary:(id)a0 urlBag:(id)a1;

@end
