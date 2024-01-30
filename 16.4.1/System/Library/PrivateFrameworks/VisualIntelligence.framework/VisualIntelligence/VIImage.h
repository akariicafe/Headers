@class NSString;

@interface VIImage : NSObject <VIImageContent>

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1;

- (struct CGSize { double x0; double x1; })imageSize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isLoaded;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1;

@end
