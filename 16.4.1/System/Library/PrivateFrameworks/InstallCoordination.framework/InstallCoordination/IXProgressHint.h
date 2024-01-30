@class NSNumber, NSDictionary;

@interface IXProgressHint : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *compressedAppAssetSizeInBytes;
@property (retain, nonatomic) NSNumber *uncompressedAppAssetSizeInBytes;
@property (retain, nonatomic) NSNumber *filesInAppAssetCount;
@property (retain, nonatomic) NSNumber *totalODRAssetSizeInBytes;
@property (retain, nonatomic) NSNumber *totalExpectedEssentialAssetSizeInBytes;
@property (readonly, nonatomic) NSNumber *loadingPhaseProportion;
@property (readonly, nonatomic) NSNumber *installingPhaseProportion;
@property (readonly, nonatomic) NSNumber *postProcessingPhaseProportion;
@property (readonly, copy, nonatomic) NSDictionary *progressProportionsDictionaryForLaunchServices;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)setPhaseProportionsForLoadingPhase:(id)a0 installingPhase:(id)a1 postProcessingPhase:(id)a2 error:(id *)a3;

@end
