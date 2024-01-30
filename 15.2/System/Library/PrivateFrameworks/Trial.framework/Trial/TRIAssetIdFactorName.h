@class NSString;
@protocol TRIAssetId;

@interface TRIAssetIdFactorName : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIAssetId> *assetId;
@property (readonly, nonatomic) NSString *factorName;

+ (id)nameWithAssetId:(id)a0 factorName:(id)a1;

- (id)description;
- (id)initWithAssetId:(id)a0 factorName:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementAssetId:(id)a0;
- (id)copyWithReplacementFactorName:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToName:(id)a0;

@end
