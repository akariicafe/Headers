@class NSMutableDictionary;

@interface CPLFeatureVersionHistory : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_anchorToVersion;
    NSMutableDictionary *_versionToAnchor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long currentFeatureVersion;

- (void)addSyncAnchor:(id)a0 forFeatureVersion:(long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCurrentFeatureVersion:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)featureVersionForSyncAnchor:(id)a0;
- (unsigned long long)hash;
- (id)syncAnchorForFeatureVersion:(long long)a0;
- (void)enumerateHistoryWithBlock:(id /* block */)a0;

@end
