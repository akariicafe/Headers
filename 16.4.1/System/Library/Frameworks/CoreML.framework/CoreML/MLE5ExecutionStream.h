@class NSArray;

@interface MLE5ExecutionStream : NSObject

@property struct e5rt_execution_stream { } *streamHandle;
@property (copy) NSArray *operations;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)_executeStream:(struct e5rt_execution_stream { } *)a0 error:(id *)a1;
- (BOOL)executeAndReturnError:(id *)a0;

@end
