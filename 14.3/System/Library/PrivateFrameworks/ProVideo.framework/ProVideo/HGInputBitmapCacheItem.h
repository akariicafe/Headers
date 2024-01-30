@class PVColorSpace, NSDate;

@interface HGInputBitmapCacheItem : NSObject

@property (readonly, nonatomic) struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> *__begin_; struct HGRef<HGBitmap> *__end_; struct __compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> *__value_; } __end_cap_; } bitmaps;
@property (readonly, nonatomic) NSDate *lastUsedTime;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fullSize;
@property (readonly, nonatomic) PVColorSpace *colorSpace;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)updateLastUsedTime;
- (id)initWithHGBitmap:(struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> *x0; struct HGRef<HGBitmap> *x1; struct __compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> *x0; } x2; } *)a0 fullSize:(struct CGSize { double x0; double x1; })a1 colorSpace:(id)a2;

@end
