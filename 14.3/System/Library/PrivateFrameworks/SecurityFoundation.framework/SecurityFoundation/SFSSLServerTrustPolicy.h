@class NSString;

@interface SFSSLServerTrustPolicy : SFTrustPolicy <NSSecureCoding> {
    id _sslServerTrustPolicyInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *serverName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithServerName:(id)a0;

@end
