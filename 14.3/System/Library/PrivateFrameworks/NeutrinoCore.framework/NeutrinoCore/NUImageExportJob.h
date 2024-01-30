@class NSData;

@interface NUImageExportJob : NUExportJob {
    NSData *_destinationData;
}

- (id)result;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (id)renderer:(out id *)a0;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)initWithExportRequest:(id)a0;
- (id)initWithImageExportRequest:(id)a0;
- (id)imageExportRequest;
- (id)_filterProperties:(id)a0;
- (id)imageDestinationOptions;

@end
