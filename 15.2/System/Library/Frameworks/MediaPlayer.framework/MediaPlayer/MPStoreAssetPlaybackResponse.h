@class NSArray, NSDictionary, MPStoreHLSAssetInfo, NSDate;

@interface MPStoreAssetPlaybackResponse : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSDictionary *dialogDictionary;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSArray *fileAssetInfoList;
@property (readonly, nonatomic) MPStoreHLSAssetInfo *hlsAssetInfo;
@property (readonly, nonatomic, getter=isLiveRadioStream) BOOL liveRadioStream;
@property (readonly, copy, nonatomic) NSArray *radioStreamAssetInfoList;
@property (readonly, nonatomic) id suzeLeaseID;
@property (readonly, nonatomic, getter=isSubscriptionRequired) BOOL subscriptionRequired;
@property (readonly, nonatomic) BOOL onlineSubscriptionKeysRequired;

- (id)_copyWithPlaybackResponseClass:(Class)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
