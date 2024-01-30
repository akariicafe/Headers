@class MPSGraphExecutable;

@interface MPSGraphExecutionDescriptor : NSObject

@property (retain, nonatomic) MPSGraphExecutable *executable;
@property (copy) id /* block */ scheduledHandler;
@property (copy) id /* block */ completionHandler;
@property BOOL waitUntilCompleted;

- (void).cxx_destruct;

@end
