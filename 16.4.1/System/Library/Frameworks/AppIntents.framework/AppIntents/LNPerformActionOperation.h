@class LNActionExecutorOptions, NSUUID, NSString, LNSuccessResult, LNAction;
@protocol LNConnectionClientInterface, LNPerformActionOperationDelegate;

@interface LNPerformActionOperation : NSObject <LNPerformActionExecutorDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) LNSuccessResult *result;
@property (readonly, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) LNAction *action;
@property (readonly, nonatomic) LNActionExecutorOptions *options;
@property (readonly, nonatomic) id<LNConnectionClientInterface> client;
@property (retain, nonatomic) id<LNPerformActionOperationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithError:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)requestActionConfirmation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestContinueInApp:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterConfirmation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterDisambiguation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterNeedsValue:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAction:(id)a0 options:(id)a1 client:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestViewSnippetEnvironmentWithCompletionHandler:(id /* block */)a0;

@end
