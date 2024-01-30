@interface NSObservationBuffer : NSObservationTransformer

@property (getter=isMemoryPressureSensitive) BOOL memoryPressureSensitive;
@property (copy) id /* block */ bufferFullHandler;
@property BOOL automaticallyEmitsObjects;

+ (id)bufferWithMaximumObjectCount:(unsigned long long)a0 fullPolicy:(long long)a1 outputQueue:(id)a2;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)bufferWithOutputQueue:(id)a0;

- (id)initWithMaximumObjectCount:(unsigned long long)a0 fullPolicy:(long long)a1 outputQueue:(id)a2;
- (void)emitObject;
- (void)emitAllObjects;

@end
