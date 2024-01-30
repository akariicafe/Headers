@class QLCacheFileIdentifier, QLThumbnailVersion, NSData, NSDate, QLCacheBlobInfo, NSObject;
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
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long bitsPerComponent;
@property (readonly, nonatomic) unsigned long long bitsPerPixel;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) unsigned int bitmapInfo;
@property (readonly, nonatomic) NSData *bitmapData;
@property (readonly, nonatomic) NSData *metadata;
@property (retain, nonatomic) QLCacheBlobInfo *bitmapDataToValidate;
@property (retain, nonatomic) QLCacheBlobInfo *metadataToValidate;
@property (readonly, nonatomic) int flavor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (readonly, nonatomic) unsigned long long externalGeneratorDataHash;
@property (readonly, nonatomic) unsigned long long hitCount;
@property (readonly, copy, nonatomic) NSDate *lastHitDate;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)setState:(unsigned long long)a0;
- (unsigned long long)state;
- (id)initWithCacheId:(unsigned long long)a0 fileIdentifier:(id)a1 version:(id)a2 size:(float)a3 iconMode:(BOOL)a4 iconVariant:(long long)a5 interpolationQuality:(int)a6 hitCount:(unsigned long long)a7 lastHitDate:(id)a8 width:(unsigned long long)a9 height:(unsigned long long)a10 bitsPerComponent:(unsigned long long)a11 bitsPerPixel:(unsigned long long)a12 bytesPerRow:(unsigned long long)a13 bitmapInfo:(unsigned int)a14 bitmapData:(id)a15 metadata:(id)a16 flavor:(int)a17 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a18 badgeType:(unsigned long long)a19 externalGeneratorDataHash:(unsigned long long)a20;
- (id)initWithCacheId:(unsigned long long)a0 thumbnailRequest:(id)a1 size:(float)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 bitsPerComponent:(unsigned long long)a5 bitsPerPixel:(unsigned long long)a6 bytesPerRow:(unsigned long long)a7 bitmapInfo:(unsigned int)a8 bitmapData:(id)a9 metadata:(id)a10 flavor:(int)a11 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a12 badgeType:(unsigned long long)a13;
- (BOOL)setState:(unsigned long long)a0 changedState:(BOOL *)a1;
- (id)initWithCacheId:(unsigned long long)a0 fileIdentifier:(id)a1 version:(id)a2 size:(float)a3 iconMode:(BOOL)a4 iconVariant:(long long)a5 interpolationQuality:(int)a6 badgeType:(unsigned long long)a7 externalGeneratorDataHash:(unsigned long long)a8 hitCount:(unsigned long long)a9 lastHitDate:(id)a10;
- (id)initWithCacheId:(unsigned long long)a0 thumbnailRequest:(id)a1 size:(float)a2 badgeType:(unsigned long long)a3;
- (id)initWithUnsavedDataForThumbnailRequest:(id)a0 size:(float)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 bitsPerComponent:(unsigned long long)a4 bitsPerPixel:(unsigned long long)a5 bytesPerRow:(unsigned long long)a6 bitmapInfo:(unsigned int)a7 bitmapData:(id)a8 reservationInfo:(id)a9 metadata:(id)a10 reservationInfo:(id)a11 flavor:(int)a12 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a13 badgeType:(unsigned long long)a14;

@end
