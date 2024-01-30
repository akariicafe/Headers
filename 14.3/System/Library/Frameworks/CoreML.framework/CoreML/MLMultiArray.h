@class NSArray;

@interface MLMultiArray : NSObject <NSSecureCoding> {
    struct MultiArrayBuffer { void /* function */ **x0; struct shared_ptr<unsigned char> { char *x0; struct __shared_weak_count *x1; } x1; struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x0; } x2; } x2; struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x0; } x2; } x3; int x4; unsigned long long x5; unsigned short x6; } *_pArray;
    BOOL _managingData;
    id /* block */ _deallocator;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long numberOfBytesPerElement;
@property (readonly, nonatomic, getter=isManagingData) BOOL managingData;
@property (readonly, nonatomic, getter=isContiguous) BOOL contiguous;
@property (readonly, nonatomic) void *dataPointer;
@property (readonly, nonatomic) long long dataType;
@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) NSArray *strides;
@property (readonly, nonatomic) long long count;

+ (BOOL)validateMultiArrays:(id)a0 forConcatenatingAlongAxis:(long long)a1 normalizedAxis:(unsigned long long *)a2 reason:(id *)a3;
+ (id)doubleVectorWithValues:(id)a0;
+ (id)doubleMultiArrayWithShape:(id)a0 valueArray:(id)a1 error:(id *)a2;
+ (id)doubleMultiArrayWithCopyOfMultiArray:(id)a0;
+ (struct __CVBuffer { } *)pixelBufferGray8FromMultiArrayHW:(id)a0 error:(id *)a1;
+ (id)doubleMatrixWithValues:(id)a0 error:(id *)a1;
+ (id)arrayFromIndexVector:(const struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x0; } x2; } *)a0;
+ (id)stringForDataType:(long long)a0;
+ (struct __CVBuffer { } *)pixelBufferBGRA8FromMultiArrayCHW:(id)a0 channelOrderIsBGR:(BOOL)a1 error:(id *)a2;
+ (id)float32MatrixWithValues:(id)a0 error:(id *)a1;
+ (id)multiArrayByConcatenatingMultiArrays:(id)a0 alongAxis:(long long)a1 dataType:(long long)a2;
+ (int)cppStorageOrder:(long long)a0;
+ (BOOL)getShapeOfArrayOfSameLengthArrays:(id)a0 numberOfRows:(unsigned long long *)a1 numberOfColumns:(unsigned long long *)a2 error:(id *)a3;
+ (BOOL)fillIndexVector:(struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x0; } x2; } *)a0 fromArray:(id)a1 error:(id *)a2;

- (id)debugQuickLookObject;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)objectAtIndexedSubscript:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithShape:(id)a0 dataType:(long long)a1 error:(id *)a2;
- (id)squeeze;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithDataPointer:(void *)a0 shape:(id)a1 dataType:(long long)a2 strides:(id)a3 deallocator:(id /* block */)a4 error:(id *)a5;
- (id)numberAtOffset:(unsigned long long)a0;
- (void)setNumber:(id)a0 atOffset:(unsigned long long)a1;
- (unsigned long long)offsetForKeyedSubscript:(id)a0;
- (id)initWithShape:(id)a0 dataType:(long long)a1 storageOrder:(long long)a2 error:(id *)a3;
- (BOOL)isEqualToMultiArray:(id)a0;
- (BOOL)isContiguousInOrder:(long long)a0;
- (double *)doublePointer;
- (id)numberArray;
- (float *)float32Pointer;
- (id)initWithMultiArrayBuffer:(struct MultiArrayBuffer { void /* function */ **x0; struct shared_ptr<unsigned char> { char *x0; struct __shared_weak_count *x1; } x1; struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x0; } x2; } x2; struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x0; } x2; } x3; int x4; unsigned long long x5; unsigned short x6; } *)a0;
- (id)initWithShape:(id)a0 dataType:(long long)a1 storageOrder:(long long)a2 bufferAlignment:(unsigned long long)a3;
- (BOOL)copyIntoMultiArray:(id)a0 error:(id *)a1;
- (BOOL)vectorizeIntoMultiArray:(id)a0 storageOrder:(long long)a1 error:(id *)a2;
- (BOOL)fillWithNumber:(id)a0;
- (void *)multiArrayBuffer;
- (BOOL)setRangeWithRawData:(id)a0 destIndex:(unsigned long long)a1 error:(id *)a2;
- (id)sliceAtOrigin:(id)a0 shape:(id)a1 squeeze:(BOOL)a2 error:(id *)a3;
- (id)squeezeDimensions:(id)a0 error:(id *)a1;
- (id)multiArrayViewExpandingDimensionsAtAxis:(long long)a0;
- (BOOL)renderToOneComponent8PixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)renderTo32BGRAPixelBuffer:(struct __CVBuffer { } *)a0 channelOrderIsBGR:(BOOL)a1 error:(id *)a2;
- (BOOL)renderToCVPixelBuffer:(struct __CVBuffer { } *)a0 channelOrderIsBGR:(BOOL)a1 error:(id *)a2;
- (void)setObject:(id)a0 atIndexedSubscript:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
