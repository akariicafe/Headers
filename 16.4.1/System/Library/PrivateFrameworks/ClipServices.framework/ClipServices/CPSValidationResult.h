@class NSDictionary, CPSValidationRequest;

@interface CPSValidationResult : NSObject <NSSecureCoding> {
    NSDictionary *_response;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CPSValidationRequest *request;
@property (readonly, nonatomic) NSDictionary *availabilities;

- (void)encodeWithCoder:(id)a0;
- (id)initWithRequest:(id)a0 response:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)validBundleIDForURL:(id)a0;

@end
