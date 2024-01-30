@interface WFSessionKitAssertion : NSObject <WFActionExtendedOperation> {
    void /* unknown type, empty encoding */ resultHandler;
    void /* unknown type, empty encoding */ failureHandler;
    void /* unknown type, empty encoding */ purpose;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ additionalResultHandlers;
    void /* unknown type, empty encoding */ additionalFailureHandlers;
    void /* unknown type, empty encoding */ cancellables;
}

@property (nonatomic, copy) id /* block */ resultHandler;
@property (nonatomic, copy) id /* block */ failureHandler;

- (void)addCompletionHandlerIfRunning:(id /* block */)a0;
- (id)initWithSessionIdentifier:(id)a0;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)startTimeoutTimer;
- (BOOL)takeWithError:(id *)a0;

@end
