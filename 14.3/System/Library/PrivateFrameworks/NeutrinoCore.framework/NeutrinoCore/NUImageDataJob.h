@class NSDictionary;

@interface NUImageDataJob : NURenderJob {
    NSDictionary *_data;
}

- (id)result;
- (id)cacheKey;
- (void).cxx_destruct;
- (id)requestOptions;
- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)scalePolicy;
- (id)extractDataToDictionary:(id)a0 bounds:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 dataExtractor:(id)a2 options:(id)a3 colorSpace:(struct CGColorSpace { } *)a4 error:(id *)a5;

@end
