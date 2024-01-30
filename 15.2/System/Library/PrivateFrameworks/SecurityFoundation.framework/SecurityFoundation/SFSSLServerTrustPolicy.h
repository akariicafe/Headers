@class NSString;

@interface SFSSLServerTrustPolicy : SFTrustPolicy <NSSecureCoding> {
    id _sslServerTrustPolicyInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *serverName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithServerName:(id)a0;

@end
