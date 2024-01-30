@class NSString;
@protocol FCContentContext;

@interface FCAudioConfigurationOperation : FCOperation

@property (readonly, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) NSString *resultConfigString;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (id)_promiseConfiguration;
- (void)operationWillFinishWithError:(id)a0;
- (id)_promiseConfiguration:(id)a0;

@end
