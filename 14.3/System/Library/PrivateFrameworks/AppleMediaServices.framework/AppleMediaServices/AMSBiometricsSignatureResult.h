@class NSString, AMSBiometricsSignatureRequest;

@interface AMSBiometricsSignatureResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSBiometricsSignatureRequest *originalRequest;
@property (retain, nonatomic) NSString *signature;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
