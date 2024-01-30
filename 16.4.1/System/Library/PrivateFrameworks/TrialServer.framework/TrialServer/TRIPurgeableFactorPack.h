@class NSString, NSSet;
@protocol TRIFactorPackId;

@interface TRIPurgeableFactorPack : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIFactorPackId> *factorPackId;
@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) NSSet *purgeableAssetFactorNames;

+ (id)packWithFactorPackId:(id)a0 namespaceName:(id)a1 purgeableAssetFactorNames:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithReplacementNamespaceName:(id)a0;
- (id)copyWithReplacementFactorPackId:(id)a0;
- (id)copyWithReplacementPurgeableAssetFactorNames:(id)a0;
- (id)initWithFactorPackId:(id)a0 namespaceName:(id)a1 purgeableAssetFactorNames:(id)a2;
- (BOOL)isEqualToPack:(id)a0;

@end
