@class NSString, NSPointerArray;

@interface ADEspressoRunnerV2 : NSObject <ADEspressoRunnerProtocol> {
    NSPointerArray *_dummyOperations;
    struct e5rt_execution_stream { } *_dummyStream;
    NSString *_path;
    NSString *_defaultFunctionName;
}

@property (readonly, nonatomic) NSString *networkVersionString;
@property struct e5rt_execution_stream_operation { } *operation;
@property struct e5rt_execution_stream { } *stream;

- (long long)execute;
- (void)dealloc;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)createAndRegisterPixelBufferForDescriptor:(id)a0;
- (id)initWithPath:(id)a0 forEngine:(unsigned long long)a1 configurationName:(id)a2;
- (id)registerDescriptor:(id)a0;
- (long long)registerPixelBuffer:(struct __CVBuffer { } *)a0 forDescriptor:(id)a1;
- (long long)updateFeedbackLoopInputBuffer:(struct __CVBuffer **)a0 inputDescriptor:(id)a1 outputBuffer:(struct __CVBuffer **)a2 outputDescriptor:(id)a3;
- (BOOL)isSamePixelFormat:(unsigned int)a0 e5rtFormat:(int)a1;
- (long long)prewireSurfaces:(id)a0 toDescriptors:(id)a1;
- (long long)registerIOSurface:(struct __IOSurface { } *)a0 forDescriptor:(id)a1;
- (long long)registerIOSurface:(struct __IOSurface { } *)a0 forDescriptor:(id)a1 usingOperation:(struct e5rt_execution_stream_operation { } *)a2;
- (long long)registerIOSurface:(struct __IOSurface { } *)a0 forSurfacePort:(struct e5rt_io_port **)a1 surfaceDesc:(struct e5rt_surface_desc { } *)a2;
- (long long)registerIOSurface:(struct __IOSurface { } *)a0 forTensorPort:(struct e5rt_io_port **)a1;
- (long long)registerPixelBufferPtr:(struct __CVBuffer **)a0 forDescriptor:(id)a1;
- (long long)registerPixelBufferPtr:(struct __CVBuffer **)a0 forDescriptor:(id)a1 forSurfacePort:(struct e5rt_io_port **)a2;
- (long long)registerPixelBufferPtr:(struct __CVBuffer **)a0 forDescriptor:(id)a1 forTensorPort:(struct e5rt_io_port **)a2;
- (long long)registerPixelBufferPtr:(struct __CVBuffer **)a0 forDescriptor:(id)a1 usingOperation:(struct e5rt_execution_stream_operation { } *)a2;
- (struct e5rt_io_port { } *)retainPortForDescriptor:(id)a0 usingOperation:(struct e5rt_execution_stream_operation { } *)a1;
- (void)unwireAllSurfaces;

@end
