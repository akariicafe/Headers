@class PVColorSpace, NSDate;

@interface HGInputBitmapCacheItem : NSObject

@property (readonly, nonatomic) struct vector<HGRef<HGBitmap>, std::allocator<HGRef<HGBitmap>>> { void *__begin_; void *__end_; struct __compressed_pair<HGRef<HGBitmap> *, std::allocator<HGRef<HGBitmap>>> { void *__value_; } __end_cap_; } bitmaps;
@property (readonly, nonatomic) NSDate *lastUsedTime;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fullSize;
@property (readonly, nonatomic) PVColorSpace *colorSpace;
@property (readonly, nonatomic) struct HGRef<HGBitmap> { struct HGBitmap *m_Obj; } gainMap;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithHGBitmap:(void *)a0 fullSize:(struct CGSize { double x0; double x1; })a1 colorSpace:(id)a2 gainMap:(struct HGRef<HGBitmap> { struct HGBitmap *x0; })a3;
- (void)updateLastUsedTime;

@end
