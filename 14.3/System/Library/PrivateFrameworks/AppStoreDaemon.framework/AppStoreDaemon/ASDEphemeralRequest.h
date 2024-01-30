@class ASDRequestOptions;

@interface ASDEphemeralRequest : ASDRequest

@property (copy) id /* block */ completionHandler;
@property (readonly, copy, nonatomic) ASDRequestOptions *options;

+ (long long)requestType;
+ (BOOL)supportsSecureCoding;

- (id)_initWithOptions:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_startWithCompletionHandler:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)_callCompletionHandlerWithResponse:(id)a0;
- (void)_failCompletionHandlerWithError:(id)a0;
- (void)receiveResponse:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
