@interface ADJasperPointCloud : NSObject {
    struct JasperPointCloud { struct unique_ptr<unsigned char [], std::__1::default_delete<unsigned char []> > { struct __compressed_pair<unsigned char *, std::__1::default_delete<unsigned char []> > { char *__value_; } __ptr_; } m_ownedStorage; struct JasperPointCloudDataHeader *m_header; unsigned long long m_capacity; } _pc;
    struct __CVBuffer { } *_dataBuffer;
}

@property (readonly) int length;
@property (readonly) const float *euclideanDistances;
@property (readonly) const struct CGPoint { double x0; double x1; } *cameraPixels;
@property (readonly) const struct CGPoint { double x0; double x1; } *undistortedCameraPixels;
@property (readonly) const void *points;
@property (readonly) const float *intensities;
@property (readonly) const float *confidences;
@property (readonly) const float *signalToNoiseRatios;
@property (readonly) const char *bankIds;
@property (readonly) const char *spotIds;
@property (readonly) const char *echoIds;
@property (readonly) const unsigned int *flags;

+ (unsigned int)pixelFormat;
+ (id)makeWithDataBuffer:(struct __CVBuffer { } *)a0;
+ (BOOL)prepareDataBuffer:(struct __CVBuffer { } *)a0 forLength:(int)a1;
+ (unsigned long long)requiredStorageBytesForLength:(int)a0;
+ (id)pointCloudByMergingPointClouds:(id)a0;
+ (id)pointCloudFromCSV:(id)a0;
+ (id)pointCloudFromJSPP:(id)a0;
+ (id)pointCloudFromFile:(id)a0;
+ (id)pointCloudByMergingPointClouds:(id)a0 applyingTransforms:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a1 projectingToCamera:(id)a2;

- (id)initWithLength:(int)a0;
- (id)mutableCopy;
- (void).cxx_destruct;
- (BOOL)reset;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)a0;
- (struct __CVBuffer { } *)dataBuffer;
- (int)size;
- (id).cxx_construct;
- (id)dictionaryRepresentation;
- (id)initWithDataBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)initWithPointCloud:(id)a0;
- (id)pointCloudByChangingPointOfViewFrom:(id)a0 to:(id)a1;
- (id)initByMergingPointClouds:(id)a0;
- (BOOL)pointCloudToCSV:(id)a0 atomically:(BOOL)a1;
- (BOOL)pointCloudToJSPP:(id)a0 atomically:(BOOL)a1;
- (id)pointCloudByChangingPointOfViewByTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 to:(id)a1;
- (id)initWithLength:(int)a0 storage:(struct __CVBuffer { } *)a1;
- (long long)projectJasperPointsFilteredBy:(id)a0 croppedBy:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotatedBy:(long long)a2 andScaledInto:(struct __CVBuffer { } *)a3;
- (long long)projectJasperPointsFilteredBy:(id)a0 croppedBy:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotatedBy:(long long)a2 andScaledMergingWith:(struct __CVBuffer { } *)a3;
- (long long)projectJasperPointsCroppedBy:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rotatedBy:(long long)a1 andScaledInto:(struct __CVBuffer { } *)a2;
- (id)pointCloudByApplyingFilter:(id)a0;

@end
