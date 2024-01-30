@class NSString;

@interface CASSystemAuthenticationRequest : CASAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long service;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSString *appleAccountAltDSID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)authType;
- (id)description;
- (void).cxx_destruct;

@end
