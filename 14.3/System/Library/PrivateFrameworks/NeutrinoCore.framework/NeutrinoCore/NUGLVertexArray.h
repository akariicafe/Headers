@class NUGLVertexLayout, NSArray, NUGLBuffer;

@interface NUGLVertexArray : NUGLObject {
    NUGLBuffer *_buffer;
    NSArray *_locations;
    BOOL _needsUpdate;
}

@property (readonly, nonatomic) NUGLVertexLayout *layout;
@property (readonly, nonatomic) long long capacity;
@property (readonly, nonatomic) long long count;
@property (copy, nonatomic) NSArray *attributeLocations;

- (void)delete;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)generate:(id)a0;
- (void)ensure:(id)a0;
- (id)initWithLayout:(id)a0 capacity:(long long)a1;
- (void)_updateAttributesWithContext:(id)a0;
- (void)readVertexDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 context:(id)a1 block:(id /* block */)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })bufferRangeForVertexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })writeVertexData:(long long)a0 context:(id)a1 block:(id /* block */)a2;
- (void)_growToCapacity:(long long)a0 context:(id)a1;

@end
