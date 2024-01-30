@class NSMutableDictionary;

@interface CPLFeatureVersionHistory : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_anchorToVersion;
    NSMutableDictionary *_versionToAnchor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long currentFeatureVersion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCurrentFeatureVersion:(long long)a0;
- (void)addSyncAnchor:(id)a0 forFeatureVersion:(long long)a1;
- (id)syncAnchorForFeatureVersion:(long long)a0;
- (long long)featureVersionForSyncAnchor:(id)a0;
- (void)enumerateHistoryWithBlock:(id /* block */)a0;

@end
