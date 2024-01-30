@class NSArray, NSNumber;

@interface ETDataTensor : NSObject

@property struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } imageBuffer;
@property struct vector<std::__1::shared_ptr<unsigned char>, std::__1::allocator<std::__1::shared_ptr<unsigned char> > > { struct shared_ptr<unsigned char> *__begin_; struct shared_ptr<unsigned char> *__end_; struct __compressed_pair<std::__1::shared_ptr<unsigned char> *, std::__1::allocator<std::__1::shared_ptr<unsigned char> > > { struct shared_ptr<unsigned char> *__value_; } __end_cap_; } allocatedImageData;
@property struct float_buffer_t { float *ptr; unsigned long long size; BOOL free_when_done; } float_buffer;
@property struct shared_ptr<Espresso::blob<float, 4> > { struct blob<float, 4> *__ptr_; struct __shared_weak_count *__cntrl_; } blob;
@property (nonatomic) void *dataPointer;
@property (retain, nonatomic) NSArray *dataArray;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *shape;
@property (retain, nonatomic) NSArray *strides;
@property (retain, nonatomic) NSNumber *maxNumberOfElements;

- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (id)initWithData:(void *)a0 type:(unsigned long long)a1 shape:(id)a2 strides:(id)a3;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 imageParameters:(id)a1 error:(id *)a2;
- (id)initWithBlobContainer:(struct shared_ptr<Espresso::abstract_blob_container> { struct abstract_blob_container *x0; struct __shared_weak_count *x1; })a0;

@end
