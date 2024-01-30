@class ASDRequestOptions;

@interface ASDEphemeralRequest : ASDRequest {
    id /* block */ _completionHandler;
}

@property (readonly, copy, nonatomic) ASDRequestOptions *options;

+ (BOOL)supportsSecureCoding;
+ (long long)requestType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)receiveResponse:(id)a0;

@end
