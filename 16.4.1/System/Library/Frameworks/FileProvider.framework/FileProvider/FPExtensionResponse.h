@class NSDictionary, NSString, NSFileProviderDomainVersion;

@interface FPExtensionResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property (retain, nonatomic) NSDictionary *domainUserInfo;
@property (nonatomic) int extensionPid;
@property (nonatomic) long long sequenceNumber;
@property (copy, nonatomic) NSString *callDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
