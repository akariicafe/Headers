@class NSString;

@interface AVCaptureDeferredPhotoProxy : AVCapturePhoto {
    NSString *_captureRequestIdentifier;
}

@property (readonly, copy) NSString *persistentStorageUUID;
@property (readonly) NSString *deferredPhotoIdentifier;

- (id)initWithDeferredPhotoIdentifier:(id)a0;
- (id)description;
- (id)initWithTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 captureRequestIdentifier:(id)a1 photoIdentifier:(id)a2 expectedPhotoProcessingFlags:(unsigned int)a3;
- (BOOL)isEqual:(id)a0;
- (id)initWithTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 proxySurface:(struct __IOSurface { } *)a1 proxySurfaceSize:(unsigned long long)a2 proxyFileType:(id)a3 previewPhotoSurface:(struct __IOSurface { } *)a4 metadata:(id)a5 captureRequest:(id)a6 sequenceCount:(unsigned long long)a7 photoCount:(unsigned long long)a8 captureRequestIdentifier:(id)a9 photoIdentifier:(id)a10 expectedPhotoProcessingFlags:(unsigned int)a11 sourceDeviceType:(id)a12;
- (void)dealloc;
- (id)debugDescription;
- (id)captureRequestIdentifier;

@end
