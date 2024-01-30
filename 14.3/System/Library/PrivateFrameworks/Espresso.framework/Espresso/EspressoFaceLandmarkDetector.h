@interface EspressoFaceLandmarkDetector : NSObject {
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } crop_scaled;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } crop_192;
    struct shared_ptr<Espresso::net> { struct net *__ptr_; struct __shared_weak_count *__cntrl_; } net;
    struct shared_ptr<Espresso::net> { struct net *__ptr_; struct __shared_weak_count *__cntrl_; } net_detect;
    struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > { struct shared_ptr<Espresso::net> *__begin_; struct shared_ptr<Espresso::net> *__end_; struct __compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > { struct shared_ptr<Espresso::net> *__value_; } __end_cap_; } nets_sub_landmark;
}

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } newface;

- (struct vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> > { struct FaceLandmarkDetectorPoint *x0; struct FaceLandmarkDetectorPoint *x1; struct __compressed_pair<FaceLandmarkDetectorPoint *, std::__1::allocator<FaceLandmarkDetectorPoint> > { struct FaceLandmarkDetectorPoint *x0; } x2; })detectInImageRect:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 face:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 sublandmark:(BOOL)a2;
- (struct vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> > { struct FaceLandmarkDetectorPoint *x0; struct FaceLandmarkDetectorPoint *x1; struct __compressed_pair<FaceLandmarkDetectorPoint *, std::__1::allocator<FaceLandmarkDetectorPoint> > { struct FaceLandmarkDetectorPoint *x0; } x2; })extractSubLandmarksFromCrop192:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 centers192:(struct vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> > { struct FaceLandmarkDetectorPoint *x0; struct FaceLandmarkDetectorPoint *x1; struct __compressed_pair<FaceLandmarkDetectorPoint *, std::__1::allocator<FaceLandmarkDetectorPoint> > { struct FaceLandmarkDetectorPoint *x0; } x2; } *)a1;
- (void)commonInit:(id)a0 context:(struct shared_ptr<Espresso::abstract_context> { struct abstract_context *x0; struct __shared_weak_count *x1; })a1 platform:(int)a2 computePath:(int)a3;
- (struct vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> > { struct FaceLandmarkDetectorPoint *x0; struct FaceLandmarkDetectorPoint *x1; struct __compressed_pair<FaceLandmarkDetectorPoint *, std::__1::allocator<FaceLandmarkDetectorPoint> > { struct FaceLandmarkDetectorPoint *x0; } x2; })detect:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 face:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 sublandmark:(BOOL)a2 doFaceRectFix:(BOOL)a3;
- (id)initWithNetworkAtPath:(id)a0 context:(struct shared_ptr<Espresso::abstract_context> { struct abstract_context *x0; struct __shared_weak_count *x1; })a1 platform:(int)a2 computePath:(int)a3;
- (id)initWithNetworkAtPath:(id)a0 contextObjC:(id)a1 platform:(int)a2 computePath:(int)a3;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;

@end
