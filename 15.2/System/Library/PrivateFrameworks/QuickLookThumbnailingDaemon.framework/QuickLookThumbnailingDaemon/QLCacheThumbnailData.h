@class QLTBitmapFormat, QLCacheFileIdentifier, QLThumbnailVersion, NSData, NSDate, QLCacheBlobInfo, NSObject;
@protocol OS_dispatch_queue;

@interface QLCacheThumbnailData : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _state;
}

@property (readonly, nonatomic) unsigned long long totalBufferSize;
@property (readonly, nonatomic) BOOL hasData;
@property (readonly, nonatomic) QLCacheFileIdentifier *fileIdentifier;
@property (readonly, nonatomic) QLThumbnailVersion *version;
@property (readonly, nonatomic) unsigned long long cacheId;
@property (readonly, nonatomic) float size;
@property (readonly, nonatomic) BOOL iconMode;
@property (readonly, nonatomic) long long iconVariant;
@property (readonly, nonatomic) int interpolationQuality;
@property (readonly, nonatomic) unsigned long long badgeType;
@property (readonly, nonatomic) QLTBitmapFormat *bitmapFormat;
@property (readonly, nonatomic) NSData *bitmapData;
@property (readonly, nonatomic) NSData *metadata;
@property (retain, nonatomic) QLCacheBlobInfo *bitmapDataToValidate;
@property (retain, nonatomic) QLCacheBlobInfo *metadataToValidate;
@property (readonly, nonatomic) int flavor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (readonly, nonatomic) unsigned long long externalGeneratorDataHash;
@property (readonly, nonatomic) unsigned long long hitCount;
@property (readonly, copy, nonatomic) NSDate *lastHitDate;

- (BOOL)setState:(unsigned long long)a0;
- (unsigned long long)state;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCacheId:(unsigned long long)a0 fileIdentifier:(id)a1 version:(id)a2 size:(float)a3 iconMode:(BOOL)a4 iconVariant:(long long)a5 interpolationQuality:(int)a6 hitCount:(unsigned long long)a7 lastHitDate:(id)a8 bitmapFormat:(id)a9 bitmapData:(id)a10 metadata:(id)a11 flavor:(int)a12 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a13 badgeType:(unsigned long long)a14 externalGeneratorDataHash:(unsigned long long)a15;
- (id)initWithCacheId:(unsigned long long)a0 thumbnailRequest:(id)a1 size:(float)a2 bitmapFormat:(id)a3 bitmapData:(id)a4 metadata:(id)a5 flavor:(int)a6 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 badgeType:(unsigned long long)a8;
- (BOOL)setState:(unsigned long long)a0 changedState:(BOOL *)a1;
- (id)initWithCacheId:(unsigned long long)a0 fileIdentifier:(id)a1 version:(id)a2 size:(float)a3 iconMode:(BOOL)a4 iconVariant:(long long)a5 interpolationQuality:(int)a6 badgeType:(unsigned long long)a7 externalGeneratorDataHash:(unsigned long long)a8 hitCount:(unsigned long long)a9 lastHitDate:(id)a10;
- (id)initWithCacheId:(unsigned long long)a0 thumbnailRequest:(id)a1 size:(float)a2 badgeType:(unsigned long long)a3;
- (id)initWithUnsavedDataForThumbnailRequest:(id)a0 size:(float)a1 bitmapFormat:(id)a2 bitmapData:(id)a3 reservationInfo:(id)a4 metadata:(id)a5 reservationInfo:(id)a6 flavor:(int)a7 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a8 badgeType:(unsigned long long)a9;

@end
