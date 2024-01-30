@class NSObject;
@protocol OS_dispatch_data;

@interface MTLIndirectArgumentBufferEmulationData : NSObject {
    NSObject<OS_dispatch_data> *_dataMap;
    char *_bufferIndices;
    char *_textureIndices;
    char *_samplerIndices;
    const void *_dataPtr;
    unsigned long long _dataSize;
}

- (id)initWithData:(id)a0;
- (void)dealloc;
- (void)bindIndirectArgumentsWithFunctions:(struct { id /* block */ x0; id /* block */ x1; id /* block */ x2; id /* block */ x3; })a0;

@end
