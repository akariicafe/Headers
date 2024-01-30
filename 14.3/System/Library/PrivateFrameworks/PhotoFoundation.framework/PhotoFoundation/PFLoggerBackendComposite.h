@class NSArray;

@interface PFLoggerBackendComposite : PFLoggerBackendAdapter

@property (retain) NSArray *backends;
@property BOOL allBackendsAllowConcurrentAccess;

- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithBackends:(id)a0;
- (BOOL)allowsConcurrentAccess;
- (void)logFromCodeLocation:(struct { char *x0; char *x1; char *x2; char *x3; void *x4; })a0 facility:(id)a1 subsystem:(id)a2 level:(int)a3 message:(id)a4 format:(id)a5 args:(char *)a6;

@end
