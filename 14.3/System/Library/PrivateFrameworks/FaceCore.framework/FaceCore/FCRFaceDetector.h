@class NSObject;

@interface FCRFaceDetector : NSObject {
    void *api;
    NSObject *lock;
}

+ (id)faceDetector;
+ (id)faceDetectorWithOptions:(id)a0;
+ (int)findProfileInParameters:(id)a0;
+ (id)fastFaceDetector;
+ (id)preciseFaceDetector;
+ (id)standardTrackingDetector;
+ (id)keypointTrackingDetector;

- (id)initWithOptions:(id)a0;
- (void)dealloc;
- (id)version;
- (id)detectFacesInData:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3 options:(id)a4 error:(id *)a5;
- (id)extractDetailsForFaces:(id)a0 inData:(id)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 options:(id)a5 error:(id *)a6;
- (id)extractDetailsForFaces:(id)a0 inImage:(id)a1 options:(id)a2 error:(id *)a3;
- (id)detectFacesInImage:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithProfile:(int)a0 parameters:(id)a1;
- (void)createFaceCoreLightApiWithProfile:(int)a0 parameters:(id)a1;
- (void)setParam:(id)a0 toValue:(id)a1 withDefaultValue:(id)a2 usingApi:(struct FaceCoreAPI { void /* function */ **x0; struct FaceCoreAPIInternal *x1; struct FaceCoreContext *x2; void *x3; } *)a3;
- (id)parseRegionOfInterestParam:(id)a0;
- (id)convertRectsToString:(id)a0;
- (void)updateDetectionParamsValues:(id)a0 image:(id)a1;
- (id)createFCRFace:(struct face { int x0; struct coord { int x0; int x1; } x1; struct coord { int x0; int x1; } x2; struct coord { int x0; int x1; } x3; struct coord { int x0; int x1; } x4; float x5; int x6; int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; int x9; struct vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> > { struct coord *x0; struct coord *x1; struct __compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> > { struct coord *x0; } x2; } x10; int x11; BOOL x12; BOOL x13; float x14; float x15; BOOL x16; float x17; BOOL x18; float x19; struct naturalSmileData *x20; } *)a0 image:(id)a1;
- (id)createFCRImage:(struct CGImage { } *)a0;
- (void)updateExtractionParamsValues:(id)a0;
- (struct image { char *x0; int x1; int x2; })createImage:(id)a0;
- (struct face { int x0; struct coord { int x0; int x1; } x1; struct coord { int x0; int x1; } x2; struct coord { int x0; int x1; } x3; struct coord { int x0; int x1; } x4; float x5; int x6; int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; int x9; struct vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> > { struct coord *x0; struct coord *x1; struct __compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> > { struct coord *x0; } x2; } x10; int x11; BOOL x12; BOOL x13; float x14; float x15; BOOL x16; float x17; BOOL x18; float x19; struct naturalSmileData *x20; })createFace:(id)a0 image:(id)a1;
- (void)updateFCRFace:(id)a0 from:(struct face { int x0; struct coord { int x0; int x1; } x1; struct coord { int x0; int x1; } x2; struct coord { int x0; int x1; } x3; struct coord { int x0; int x1; } x4; float x5; int x6; int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; int x9; struct vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> > { struct coord *x0; struct coord *x1; struct __compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> > { struct coord *x0; } x2; } x10; int x11; BOOL x12; BOOL x13; float x14; float x15; BOOL x16; float x17; BOOL x18; float x19; struct naturalSmileData *x20; } *)a1 image:(id)a2;
- (struct coord { int x0; int x1; })makeYFlippedCoordFromPoint:(struct CGPoint { double x0; double x1; })a0 image:(id)a1;
- (float)interpretAsFloat:(id)a0 withDefault:(float)a1;
- (struct CGPoint { double x0; double x1; })makeYFlippedPointFromCoord:(struct coord { int x0; int x1; } *)a0 image:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })makeYFlippedRectFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 image:(id)a1;
- (void)addLandmarkOfType:(id)a0 fromMesh:(struct vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> > { struct coord *x0; struct coord *x1; struct __compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> > { struct coord *x0; } x2; } *)a1 indexes:(id)a2 to:(id)a3 image:(id)a4;
- (id)parseOption:(id)a0 value:(id)a1;
- (id)parseNumericOrBoolValue:(id)a0;
- (id)transformROIs:(id)a0 image:(id)a1 usingBlock:(id /* block */)a2;
- (id)detectFacesInCGImage:(struct CGImage { } *)a0 options:(id)a1 error:(id *)a2;
- (id)extractDetailsForFaces:(id)a0 inCGImage:(struct CGImage { } *)a1 options:(id)a2 error:(id *)a3;
- (float)compareFace:(id)a0 toFace:(id)a1 error:(id *)a2;

@end
