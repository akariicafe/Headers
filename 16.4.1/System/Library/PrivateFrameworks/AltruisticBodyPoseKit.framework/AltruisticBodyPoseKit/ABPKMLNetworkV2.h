@class NSMutableDictionary;

@interface ABPKMLNetworkV2 : NSObject {
    struct e5rt_program_function { } *_mainFunction;
    struct e5rt_execution_stream { } *_stream;
    struct e5rt_program_library { } *_library;
    BOOL _useSurface;
}

@property (readonly, nonatomic) NSMutableDictionary *inputBuffers;
@property (readonly, nonatomic) NSMutableDictionary *outputBuffers;

- (BOOL)execute;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)changeNetWorkConfig:(id)a0;
- (id)initWithNetworkPath:(id)a0 inputNames:(id)a1 outputNames:(id)a2 useSurface:(BOOL)a3;
- (id)initWithNetworkPath:(id)a0 networkConfig:(id)a1 inputNames:(id)a2 outputNames:(id)a3 useSurface:(BOOL)a4;

@end
