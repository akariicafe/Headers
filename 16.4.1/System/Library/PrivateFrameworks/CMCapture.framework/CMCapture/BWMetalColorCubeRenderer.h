@class NSString, NSBundle, FigColorCubeMetalFilter, NSData, BWColorLookupCache;
@protocol MTLCommandQueue;

@interface BWMetalColorCubeRenderer : NSObject <BWFilterRenderer> {
    NSBundle *_bundle;
    FigColorCubeMetalFilter *_filters[5];
    NSData *_currentForegroundColorLookupTables[5];
    NSData *_currentBackgroundColorLookupTables[5];
    struct BWInterpolatedColorLookupTableEntry { NSData *lookupTable; float strength; NSData *interpolatedTable; } _interpolatedForegroundColorLookupTables[5];
    struct BWInterpolatedColorLookupTableEntry { NSData *lookupTable; float strength; NSData *interpolatedTable; } _interpolatedBackgroundColorLookupTables[5];
    BWColorLookupCache *_colorLookupCache;
    id<MTLCommandQueue> _mtlCommandQueue;
}

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) BOOL supportsAnimation;
@property (readonly, nonatomic) BOOL adjustsMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)bundle;

- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)dealloc;
- (void)renderUsingParameters:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 originalPixelBuffer:(struct __CVBuffer { } *)a3 processedPixelBuffer:(struct __CVBuffer { } *)a4 completionHandler:(id /* block */)a5;
- (int)prepareForRenderingWithParameters:(id)a0 inputVideoFormat:(id)a1 inputDepthFormat:(id)a2;
- (id)initWithMetalCommandQueue:(id)a0 mixInGammaDomain:(BOOL)a1;

@end
