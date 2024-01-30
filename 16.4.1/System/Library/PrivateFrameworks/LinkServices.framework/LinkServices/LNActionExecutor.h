@class NSUUID, NSString, LNActionExecutorPassthroughDelegate, LNActionExecutorOptions, LNAction, LNConnection, LNActionMetadata, NSObject;
@protocol LNActionExecutorDelegate, OS_os_activity;

@interface LNActionExecutor : NSObject <LNConnectionClientInterface>

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (retain, nonatomic) LNActionExecutorPassthroughDelegate *showOutputActionPassthroughDelegate;
@property (copy, nonatomic) LNActionMetadata *_showOutputActionMetadata;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) LNConnection *connection;
@property (readonly, copy, nonatomic) LNActionExecutorOptions *options;
@property (readonly, copy, nonatomic) LNAction *action;
@property (weak, nonatomic) id<LNActionExecutorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)perform;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)_logTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)donateIfNecessaryWithResult:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAction:(id)a0 connection:(id)a1 options:(id)a2;
- (void)requestActionConfirmation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestContinueInApp:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterConfirmation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterDisambiguation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterNeedsValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestViewSnippetEnvironmentWithCompletion:(id /* block */)a0;
- (void)requestViewSnippetSizeWithCompletion:(id /* block */)a0;
- (void)runShowOutputActionIfNecessary:(id)a0 completionHandler:(id /* block */)a1;
- (void)setCompletedWithError:(id)a0;

@end
