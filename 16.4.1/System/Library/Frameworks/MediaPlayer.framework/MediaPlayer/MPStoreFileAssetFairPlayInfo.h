@class NSDictionary, NSData, ICStoreFileAssetFairPlayInfo;

@interface MPStoreFileAssetFairPlayInfo : NSObject {
    ICStoreFileAssetFairPlayInfo *_internalInfo;
}

@property (readonly, copy, nonatomic) NSDictionary *responseSinfDictionary;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSData *dpInfoData;
@property (readonly, copy, nonatomic) NSData *pinfData;
@property (readonly, copy, nonatomic) NSData *sinfData;
@property (readonly, copy, nonatomic) NSData *sinf2Data;
@property (readonly, copy, nonatomic) NSDictionary *purchaseBundleSinfDictionary;

- (void).cxx_destruct;
- (id)initWithResponseSinfDictionary:(id)a0;
- (id)initWithiTunesCloudStoreFileAssetFairPlayInfo:(id)a0;

@end
