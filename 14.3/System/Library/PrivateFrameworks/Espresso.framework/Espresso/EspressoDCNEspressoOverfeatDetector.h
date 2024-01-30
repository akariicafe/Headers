@class EspressoFDOverfeatNetwork;

@interface EspressoDCNEspressoOverfeatDetector : NSObject {
    int tileSizeScaleFactor;
    int tileDimension;
    int localFaceMerging;
    struct FaceList { struct list<vision::DCN::boundingbox, std::__1::allocator<vision::DCN::boundingbox> > { struct __list_node_base<vision::DCN::boundingbox, void *> { struct __list_node_base<vision::DCN::boundingbox, void *> *x0; struct __list_node_base<vision::DCN::boundingbox, void *> *x1; } x0; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<vision::DCN::boundingbox, void *> > > { unsigned long long x0; } x1; } x0; } *face_list;
}

@property (retain, nonatomic) EspressoFDOverfeatNetwork *enet;
@property (nonatomic) double confidenceThreshold;
@property (nonatomic) double minBoundingBoxThreshold;

- (id)initWithOptions:(id)a0;
- (void)computeBBoxUsingProb:(struct shared_ptr<Espresso::blob<float, 3> > { struct blob<float, 3> *x0; struct __shared_weak_count *x1; })a0 box:(struct shared_ptr<Espresso::blob<float, 3> > { struct blob<float, 3> *x0; struct __shared_weak_count *x1; })a1 andScalefactor:(float)a2 padX:(float)a3 padY:(float)a4;
- (void)fillFaceList;
- (void)mergeFaceList;
- (id)getFacesFromNetworkResultOriginalWidth:(float)a0 originalHeight:(float)a1;
- (double)compareObject:(id)a0 withObject:(id)a1 error:(id *)a2;
- (id)init;
- (void).cxx_destruct;
- (void)commonInit;
- (void)dealloc;
- (id)getDescription;
- (id)initWithNetwork:(id)a0;

@end
