@interface FaceCoreDetector : NSObject {
    struct unique_ptr<apple::vision::libraries::facecore::FaceCoreAPI, std::default_delete<apple::vision::libraries::facecore::FaceCoreAPI>> { struct __compressed_pair<apple::vision::libraries::facecore::FaceCoreAPI *, std::default_delete<apple::vision::libraries::facecore::FaceCoreAPI>> { struct FaceCoreAPI *__value_; } __ptr_; } _api;
}

+ (id)faceDetector;
+ (id)faceDetectorWithOptions:(id)a0;
+ (void)_addLandmarkOfType:(id)a0 fromMesh:(void *)a1 indexes:(id)a2 to:(id)a3 image:(id)a4;
+ (id)_convertRectsToString:(id)a0;
+ (id)_createFCRFaceFromFace:(void *)a0 image:(id)a1;
+ (struct Face { int x0; struct coord { int x0; int x1; } x1; struct coord { int x0; int x1; } x2; struct coord { int x0; int x1; } x3; struct coord { int x0; int x1; } x4; float x5; int x6; int x7; struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; } x8; int x9; struct vector<apple::vision::libraries::facecore::coord, std::allocator<apple::vision::libraries::facecore::coord>> { struct coord *x0; struct coord *x1; struct __compressed_pair<apple::vision::libraries::facecore::coord *, std::allocator<apple::vision::libraries::facecore::coord>> { struct coord *x0; } x2; } x10; int x11; BOOL x12; BOOL x13; float x14; float x15; BOOL x16; float x17; BOOL x18; float x19; struct naturalSmileData *x20; })_createFaceFromFCRFace:(id)a0 image:(id)a1;
+ (struct image { char *x0; int x1; int x2; })_createImage:(id)a0;
+ (float)_interpretAsFloat:(id)a0 withDefault:(float)a1;
+ (struct coord { int x0; int x1; })_makeYFlippedCoordFromPoint:(struct CGPoint { double x0; double x1; })a0 image:(id)a1;
+ (struct CGPoint { double x0; double x1; })_makeYFlippedPointFromCoord:(struct coord { int x0; int x1; } *)a0 image:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_makeYFlippedRectFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 image:(id)a1;
+ (id)_parseNumericOrBoolValue:(id)a0;
+ (id)_parseOption:(id)a0 value:(id)a1;
+ (id)_parseRegionOfInterestParam:(id)a0;
+ (id)_transformROIs:(id)a0 image:(id)a1 usingBlock:(id /* block */)a2;
+ (void)_updateFCRFace:(id)a0 fromFace:(void *)a1 image:(id)a2;
+ (id)fastFaceDetector;
+ (int)findProfileInParameters:(id)a0;
+ (id)keypointTrackingDetector;
+ (id)preciseFaceDetector;
+ (id)standardTrackingDetector;

- (id)version;
- (id).cxx_construct;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)detectFacesInImage:(id)a0 options:(id)a1 error:(id *)a2;
- (id)extractDetailsForFaces:(id)a0 inImage:(id)a1 options:(id)a2 error:(id *)a3;
- (void)_createFaceCoreLightApiWithProfile:(int)a0 parameters:(id)a1;
- (void)_setParam:(id)a0 toValue:(id)a1 withDefaultValue:(id)a2;
- (void)_updateDetectionParamsValues:(id)a0;
- (void)_updateExtractionParamsValues:(id)a0;
- (id)initWithProfile:(int)a0 parameters:(id)a1;

@end
