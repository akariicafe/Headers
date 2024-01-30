@class NSString, NSURL, NUColorSpace;

@interface PIAutoLoopExportRequest : NUVideoExportRequest

@property (readonly) NSString *destinationUTI;
@property (readonly) NSURL *destinationLongExposureURL;
@property (readonly) NSURL *destinationMaskURL;
@property (readonly) NUColorSpace *outputColorSpace;

- (id)initWithRequest:(id)a0;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;
- (id)initWithComposition:(id)a0 destinationURL:(id)a1;
- (id)initWithComposition:(id)a0 stabilizedVideoURL:(id)a1 longExposureDestinationURL:(id)a2 maskDestinationURL:(id)a3 destinationUTI:(id)a4;

@end
