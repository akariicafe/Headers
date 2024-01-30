@class NSString;

@interface NFSignatureInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *rsaCert;
@property (readonly, retain, nonatomic) NSString *eccCert;
@property (readonly, retain, nonatomic) NSString *eckaCert;
@property (readonly, retain, nonatomic) NSString *seid;
@property (readonly, retain, nonatomic) NSString *platformId;
@property (readonly, retain, nonatomic) NSString *jsblCounter;
@property (readonly, nonatomic) unsigned long long certificateVersion;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
