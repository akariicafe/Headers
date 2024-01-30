@class NSDictionary, NSData;

@interface ICStoreFileAssetFairPlayInfo : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDictionary *responseSinfDictionary;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSData *dpInfoData;
@property (readonly, copy, nonatomic) NSData *pinfData;
@property (readonly, copy, nonatomic) NSData *sinfData;
@property (readonly, copy, nonatomic) NSData *sinf2Data;
@property (readonly, copy, nonatomic) NSDictionary *purchaseBundleSinfDictionary;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResponseSinfDictionary:(id)a0;

@end
