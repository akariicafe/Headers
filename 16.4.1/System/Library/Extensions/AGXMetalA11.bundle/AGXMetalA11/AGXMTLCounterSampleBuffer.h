@class AGXBuffer, NSString, IOGPUMetalBuffer, IOGPUMetalDevice;
@protocol MTLDevice;

@interface AGXMTLCounterSampleBuffer : NSObject <MTLCounterSampleBuffer> {
    IOGPUMetalDevice *_device;
    NSString *_label;
    unsigned long long _sampleCount;
    AGXBuffer *_buffer;
}

@property (readonly) IOGPUMetalBuffer *buffer;
@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) unsigned long long sampleCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)resolveCounterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 error:(id *)a2;
- (unsigned long long)sampleSize;
- (id)initWithDevice:(id)a0 length:(unsigned long long)a1 label:(id)a2 options:(unsigned long long)a3 error:(id *)a4;

@end
