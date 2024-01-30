@class NSString;
@protocol FCContentContext;

@interface FCAudioConfigurationOperation : FCOperation {
    id<FCContentContext> _context;
    NSString *_resultConfigString;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
