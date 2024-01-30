@class QLThumbnailVersion, QLCacheFileIdentifier, NSMutableArray;

@interface QLCacheIndexFileRequest : NSObject {
    struct __CFArray { } *_sizes;
    NSMutableArray *_minimumSizes;
    NSMutableArray *_badgeTypes;
    NSMutableArray *_externalGeneratorDataHashs;
    struct __CFArray { } *_lowQualities;
    BOOL _atLeastOneLowQuality;
    struct __CFArray { } *_iconModes;
    NSMutableArray *_iconVariants;
    NSMutableArray *_interpolationQualities;
}

@property (readonly) QLCacheFileIdentifier *fileIdentifier;
@property (readonly) QLThumbnailVersion *version;
@property (readonly) unsigned long long cacheId;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFileIdentifier:(id)a0 version:(id)a1;
- (void)_setCacheId:(unsigned long long)a0;
- (BOOL)allSizes;
- (void)appendSize:(float)a0 minimumSize:(float)a1 withIconMode:(unsigned char)a2 lowQuality:(BOOL)a3 badgeType:(unsigned long long)a4 iconVariant:(long long)a5 interpolationQuality:(int)a6 externalGeneratorDataHash:(unsigned long long)a7;
- (unsigned long long)badgeTypeAtIndex:(unsigned long long)a0;
- (unsigned long long)externalGeneratorDataHashAtIndex:(unsigned long long)a0;
- (BOOL)hasAtLeastOneLowQuality;
- (unsigned char)iconModeAtIndex:(long long)a0;
- (long long)iconVariantAtIndex:(unsigned long long)a0;
- (id)initWithFileIdentifier:(id)a0;
- (id)initWithVersionedFileIdentifier:(id)a0;
- (int)interpolationQualityAtIndex:(unsigned long long)a0;
- (unsigned char)lowQualityAtIndex:(long long)a0;
- (float)minimumSizeAtIndex:(unsigned long long)a0;
- (long long)sizeAndIconModeCount;
- (float)sizeAtIndex:(long long)a0;

@end
