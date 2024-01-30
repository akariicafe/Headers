@class MPSGraphCompilationDescriptor;

@interface MPSGraphExecutionDescriptor : NSObject

@property BOOL enableCommitAndContinue;
@property (retain) MPSGraphCompilationDescriptor *compilationDescriptor;
@property BOOL enableProfilingOpNames;
@property BOOL breakUpMetalEncoders;
@property (copy) id /* block */ scheduledHandler;
@property (copy) id /* block */ completionHandler;
@property BOOL waitUntilCompleted;

- (void).cxx_destruct;
- (id)init;

@end
