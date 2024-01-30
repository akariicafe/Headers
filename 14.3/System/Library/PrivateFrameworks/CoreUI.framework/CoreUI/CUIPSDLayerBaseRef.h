@class CUIPSDImageRef;

@interface CUIPSDLayerBaseRef : NSObject

@property (retain, nonatomic) CUIPSDImageRef *imageRef;
@property (nonatomic) unsigned int layerIndex;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) BOOL visibility;
@property (readonly) double opacity;
@property (readonly) double fillOpacity;
@property (readonly) int blendMode;
@property (readonly) BOOL hasLayerMask;
@property (readonly) BOOL hasVectorMask;

- (void)dealloc;
- (struct CPSDLayerRecord { void /* function */ **x0; struct CPSDFile *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short x6; struct vector<CPSDChannelLengthInfo, std::__1::allocator<CPSDChannelLengthInfo> > { struct CPSDChannelLengthInfo *x0; struct CPSDChannelLengthInfo *x1; struct __compressed_pair<CPSDChannelLengthInfo *, std::__1::allocator<CPSDChannelLengthInfo> > { struct CPSDChannelLengthInfo *x0; } x2; } x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned int x14; struct CPSDLayerMaskData { void /* function */ **x0; struct CPSDFile *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7; unsigned char x8; unsigned short x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned char x14; unsigned char x15; } x15; struct CPSDLayerBlendingRanges { void /* function */ **x0; struct CPSDFile *x1; unsigned int x2; unsigned int x3; unsigned int x4; struct vector<CPSDChannelBlendingInfo, std::__1::allocator<CPSDChannelBlendingInfo> > { struct CPSDChannelBlendingInfo *x0; struct CPSDChannelBlendingInfo *x1; struct __compressed_pair<CPSDChannelBlendingInfo *, std::__1::allocator<CPSDChannelBlendingInfo> > { struct CPSDChannelBlendingInfo *x0; } x2; } x5; } x16; char x17[256]; struct CPSDAdditionalLayerInfo { void /* function */ **x0; struct CPSDFile *x1; unsigned int x2; struct CPSDAdditionalLayerInfoItem *x3; } x18; } *)_psdLayerRecord;
- (id)_psdImageRef;
- (BOOL)isLayerGroup;
- (id)layerMaskRef;
- (id)vectorMaskRef;
- (struct CGImage { } *)_createMaskFromAlphaChannel:(long long)a0;
- (id)name;

@end
