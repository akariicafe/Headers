@class NSString, NSDictionary, NSArray;

@interface DIVerificationSessionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *tier;
@property (readonly, copy, nonatomic) NSString *serviceURL;
@property (readonly, copy, nonatomic) NSDictionary *httpHeaders;
@property (copy, nonatomic) NSString *regionCode;
@property (nonatomic) unsigned long long invocationReason;
@property (copy, nonatomic) NSArray *preferredLanguages;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 tier:(id)a1 serviceUrl:(id)a2 httpHeaders:(id)a3;

@end
