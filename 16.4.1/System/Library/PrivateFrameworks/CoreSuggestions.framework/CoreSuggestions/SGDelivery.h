@class NSURL, NSString;

@interface SGDelivery : SGObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *parentURL;
@property (readonly, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) unsigned long long provider;
@property (readonly, nonatomic) NSString *trackingNumber;

+ (unsigned long long)providerForString:(id)a0;
+ (id)stringForProvider:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRecordId:(id)a0 origin:(id)a1 parentURL:(id)a2 provider:(unsigned long long)a3 trackingNumber:(id)a4;

@end
