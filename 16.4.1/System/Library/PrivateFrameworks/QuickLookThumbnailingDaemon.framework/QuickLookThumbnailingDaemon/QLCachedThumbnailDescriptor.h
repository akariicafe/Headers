@interface QLCachedThumbnailDescriptor : NSObject <NSCopying>

@property (readonly) float size;
@property (readonly) BOOL iconMode;
@property (readonly) unsigned long long badgeType;
@property long long iconVariant;
@property int interpolationQuality;
@property unsigned long long externalGeneratorDataHash;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithThumbnailRequest:(id)a0;
- (id)initWithSize:(float)a0 iconMode:(BOOL)a1 badgeType:(unsigned long long)a2;
- (id)initWithSize:(float)a0 iconMode:(BOOL)a1 badgeType:(unsigned long long)a2 externalGeneratorDataHash:(unsigned long long)a3;

@end
