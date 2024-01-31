@class NSError;

@interface LNPerformActionExecutorDelegateProxy : NSObject <LNPerformActionExecutorDelegate> {
    void /* unknown type, empty encoding */ interface;
    void /* unknown type, empty encoding */ connection;
}

@property (nonatomic, readonly) long long connectionIdentifier;
@property (nonatomic, readonly) BOOL hasValidConnection;

- (id)init;
- (void).cxx_destruct;
- (void)requestActionConfirmation:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)requestContinueInApp:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)requestParameterConfirmation:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)requestParameterDisambiguation:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)requestParameterNeedsValue:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (id)initWithConnection:(id)a0 interface:(id)a1;
- (void)requestViewSnippetEnvironmentWithCompletionHandler:(void (^)(id))a0;

@end
