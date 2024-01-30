@class NSString;

@interface PTDomainInfo : NSObject <NSSecureCoding> {
    NSString *_uniqueIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *domainGroupName;
@property (readonly, nonatomic) NSString *domainName;
@property (readonly, nonatomic) NSString *settingsClassName;
@property (readonly, nonatomic) NSString *settingsFrameworkBundlePath;

- (id)initWithDomain:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
