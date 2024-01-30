@class NSString;

@interface TRIFetchOnDemandFactorsPersistedTask_AssetIdFactorName : TRIPBMessage

@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) BOOL hasAssetId;
@property (copy, nonatomic) NSString *factorName;
@property (nonatomic) BOOL hasFactorName;

+ (id)descriptor;

@end
