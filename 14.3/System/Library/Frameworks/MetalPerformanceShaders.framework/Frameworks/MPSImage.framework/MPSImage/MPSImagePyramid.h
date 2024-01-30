@protocol MTLBuffer;

@interface MPSImagePyramid : MPSUnaryImageKernel {
    id<MTLBuffer> wtBuffer;
    id<MTLBuffer> wtBufferh;
    float *wtArray;
    unsigned short *wtArrayh;
    BOOL separable;
}

@property (readonly, nonatomic) unsigned long long kernelHeight;
@property (readonly, nonatomic) unsigned long long kernelWidth;

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)initWithDevice:(id)a0 kernelWidth:(unsigned long long)a1 kernelHeight:(unsigned long long)a2 weights:(const float *)a3;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0 centerWeight:(float)a1;

@end
