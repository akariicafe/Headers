@class NSMutableDictionary;

@interface CPLFeatureVersionHistory : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_anchorToVersion;
    NSMutableDictionary *_versionToAnchor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long currentFeatureVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)addSyncAnchor:(id)a0 forFeatureVersion:(long long)a1;
- (void)enumerateHistoryWithBlock:(id /* block */)a0;
- (long long)featureVersionForSyncAnchor:(id)a0;
- (id)initWithCurrentFeatureVersion:(long long)a0;
- (id)syncAnchorForFeatureVersion:(long long)a0;

@end
