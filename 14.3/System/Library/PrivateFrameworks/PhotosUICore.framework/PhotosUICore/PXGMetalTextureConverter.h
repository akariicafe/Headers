@class PXGImageTexture, NSString, PXGColorProgramLibrary, NSObject;
@protocol OS_dispatch_queue, MTLDeviceSPI, PXGMetalTextureConverterDelegate;

@interface PXGMetalTextureConverter : NSObject <PXGTextureConverter> {
    long long _screenPixelCount;
}

@property (retain, nonatomic) id<MTLDeviceSPI> device;
@property (readonly, nonatomic) BOOL hasExtendedColorTarget;
@property (readonly, nonatomic) struct CGColorSpace { } *destinationColorSpace;
@property (readonly, nonatomic) PXGColorProgramLibrary *colorProgramLibrary;
@property (readonly, nonatomic) struct __CVMetalTextureCache { } *videoTextureCache;
@property (readonly, nonatomic) unsigned long long destinationColorSpaceName;
@property (weak, nonatomic) id<PXGMetalTextureConverterDelegate> delegate;
@property (readonly, nonatomic) int presentationType;
@property (nonatomic) BOOL lowMemoryMode;
@property (readonly, nonatomic) PXGImageTexture *transparentTexture;
@property (readonly, nonatomic) BOOL supportsTextureAtlas;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createAtlasForTextureAtlasManager:(id)a0;
- (id)createTextureFromCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1;
- (id)init;
- (void).cxx_destruct;
- (id)createTextureAtlasManagerForImageDataSpec:(struct { unsigned long long x0; unsigned short x1; unsigned short x2; })a0;
- (id)createTextureFromCVPixelBuffer:(struct __CVBuffer { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)dealloc;
- (id)createPayloadTextureFromPayload:(id)a0;
- (id)initWithDevice:(id)a0 destinationColorspaceName:(unsigned long long)a1;
- (id)_createTransparentTexture;

@end
