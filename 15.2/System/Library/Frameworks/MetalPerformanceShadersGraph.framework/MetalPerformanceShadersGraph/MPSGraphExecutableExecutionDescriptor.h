@interface MPSGraphExecutableExecutionDescriptor : NSObject

@property BOOL enableCommitAndContinue;
@property BOOL enableProfilingOpNames;
@property BOOL breakUpMetalEncoders;
@property (copy) id /* block */ scheduledHandler;
@property (copy) id /* block */ completionHandler;
@property BOOL waitUntilCompleted;

- (void).cxx_destruct;
- (id)init;

@end
