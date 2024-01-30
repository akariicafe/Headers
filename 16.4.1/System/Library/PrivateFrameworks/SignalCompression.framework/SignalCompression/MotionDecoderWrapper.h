@interface MotionDecoderWrapper : NSObject {
    void *decoder;
    unsigned long long _attributeCount;
    unsigned long long _componentsPerAttribute;
}

- (void)dealloc;
- (int)decodeFrameInternal:(id)a0 decodedFrame:(int *)a1 decodeError:(unsigned long long *)a2;
- (int)getAttributeCount;
- (int)getComponentPerAttributeCount;
- (char *)getPointerToDataBuffer:(id)a0;
- (id)initWithEncoderSeqParams:(id)a0;

@end
