@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSMutableArray;

@interface MPSGraphCaptureContext : NSObject {
    NSDictionary *_jsonData;
    NSMutableArray *_nodes;
    NSMutableArray *_links;
    NSMutableArray *_portLinks;
    NSMutableArray *_data;
    NSMutableArray *_functions;
    NSArray *_inputPorts;
    NSArray *_outputPorts;
    void *_context;
    NSMutableDictionary *_pipelineReflectionDictionary;
    NSMutableDictionary *_pipelineFunctionNameDictionary;
    NSMutableDictionary *_pipelineFileNameDictionary;
    NSMutableDictionary *_constantBuffers;
    NSMutableDictionary *_lastNodeWrittingToBuffer;
    NSString *_outputFolderPath;
    NSString *_graphName;
    BOOL _doNotWriteJsonFile;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)setFeeds:(id)a0 names:(id)a1;
- (id)addFunctionWithBitCode:(id)a0 metalFunctionName:(id)a1 reflection:(id)a2;
- (void)addPipeline:(id)a0 functionName:(id)a1 withReflection:(id)a2;
- (id)constantBufferName:(id)a0;
- (void)createNodeWithDispatchInfo:(id)a0 encoderContext:(void *)a1;
- (id)dataWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)functionNameForPipeline:(id)a0;
- (id)initWithOutputFolderPath:(id)a0 graphName:(id)a1;
- (id)reflectionForPipeline:(id)a0;
- (void)setConstantBuffer:(id)a0;
- (void)setInputBuffers:(id)a0 names:(id)a1;
- (void)setOutputBuffers:(id)a0 names:(id)a1;
- (void)setResults:(id)a0 names:(id)a1;
- (id)wrapComputeEncoder:(id)a0;
- (void)writeToJsonFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (void)writejsonFile:(id)a0;

@end
