@class NSData;

@interface MotionEncoderWrapper : NSObject {
    int _componentsPerAttribute;
    int _attributeCount;
    int _intraFramePeriod;
    int _frameCount;
    void *encoder;
    unsigned long long encParametersLength;
    unsigned long long estimatedEncodedFrameSizeInBytes;
    NSData *_encoderParamsData;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _bitstream;
}

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (id)encodeFrameInternal:(const int *)a0 type:(unsigned long long *)a1 encodeError:(unsigned long long *)a2;
- (id)getEncoderParams;
- (id)initWithAttributeCount:(unsigned int)a0 componentCount:(unsigned int)a1 quantization:(unsigned int)a2;

@end
