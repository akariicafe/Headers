@class _UIOldCGImageDecompressor;

@interface _UIImageAsyncCGImageContent : _UIImageCGImageContent {
    long long _orientation;
    _UIOldCGImageDecompressor *_decompressor;
}

@property BOOL finishedDecompressing;
@property (readonly) long long orientation;

- (struct CGImage { } *)CGImage;
- (id)initWithData:(id)a0 immediateLoadWithMaxSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 renderingIntent:(unsigned long long)a3 cache:(BOOL)a4;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isDecompressing;
- (id)description;
- (void).cxx_destruct;

@end
