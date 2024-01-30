@class CPLMomentShare, NSDictionary, CPLAccountFlags, NSData, CPLFeatureVersionHistory;

@interface CPLLibraryInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *assetCounts;
@property (retain, nonatomic) CPLFeatureVersionHistory *featureVersionHistory;
@property (readonly, nonatomic) CPLAccountFlags *accountFlags;
@property (copy, nonatomic) NSData *accountFlagsData;
@property (retain, nonatomic) CPLMomentShare *momentShare;

+ (id)cplAdditionalSecureClassesForProperty:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)prettyDescriptionWithAnchorDesciptionBlock:(id /* block */)a0;

@end
