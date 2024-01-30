@class PXGImageTexture, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PXGViewTextureConverter : NSObject <PXGTextureConverter>

@property (readonly, nonatomic) int presentationType;
@property (readonly, nonatomic) unsigned long long supportedContentTypes;
@property (nonatomic) BOOL lowMemoryMode;
@property (readonly, nonatomic) PXGImageTexture *transparentTexture;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createTextureAtlasManagerForImageDataSpec:(struct { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; })a0;
- (id)createPayloadTextureFromPayload:(id)a0;
- (id)applyAdjustment:(id)a0 toTexture:(id)a1 options:(struct { unsigned int x0; BOOL x1; })a2;
- (id)createAtlasForTextureAtlasManager:(id)a0;
- (id)createTextureFromCGImage:(SEL)a0 transform:(struct CGImage { } *)a1 options:(struct { unsigned int x0; BOOL x1; })a2;
- (void).cxx_destruct;
- (id)createTextureFromCVPixelBuffer:(SEL)a0 transform:(struct __CVBuffer { } *)a1 options:(struct { unsigned int x0; BOOL x1; })a2 error:(id *)a3;

@end
