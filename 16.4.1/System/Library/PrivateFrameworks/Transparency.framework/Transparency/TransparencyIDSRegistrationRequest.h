@class NSDictionary;

@interface TransparencyIDSRegistrationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double initialTimeout;
@property (retain) NSDictionary *requests;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSignatureRequests:(id)a0;

@end
