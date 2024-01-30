@class NSString, NSDictionary, NSData;

@interface STSCredentialSelect : NSObject <NSSecureCoding> {
    NSString *_credentialIdentifier;
    NSDictionary *_elementsByNamespace;
    NSData *_authData;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
