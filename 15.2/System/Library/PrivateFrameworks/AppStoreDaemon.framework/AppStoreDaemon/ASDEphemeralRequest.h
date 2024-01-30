@class ASDRequestOptions;

@interface ASDEphemeralRequest : ASDRequest

@property (copy) id /* block */ completionHandler;
@property (readonly, copy, nonatomic) ASDRequestOptions *options;

+ (BOOL)supportsSecureCoding;
+ (long long)requestType;

- (id)_initWithOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_startWithCompletionHandler:(id /* block */)a0;
- (void)_callCompletionHandlerWithResponse:(id)a0;
- (void)_failCompletionHandlerWithError:(id)a0;
- (void)receiveResponse:(id)a0;

@end
