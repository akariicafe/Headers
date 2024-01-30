@class _UICGImageDecompressor;

@interface _UIImageAsyncCGImageContent : _UIImageCGImageContent {
    long long _orientation;
    _UICGImageDecompressor *_decompressor;
}

@property BOOL finishedDecompressing;
@property (readonly) long long orientation;

- (struct CGImage { } *)CGImage;
- (void).cxx_destruct;
- (BOOL)isDecompressing;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(id)a0 immediateLoadWithMaxSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 renderingIntent:(unsigned long long)a3 cache:(BOOL)a4;

@end
