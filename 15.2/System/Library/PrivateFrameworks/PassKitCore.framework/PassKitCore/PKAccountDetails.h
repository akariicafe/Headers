@class PKCreditAccountDetails;

@interface PKAccountDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKCreditAccountDetails *creditDetails;
@property (readonly, nonatomic) unsigned long long type;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCreditDetails:(id)a0;
- (id)initWithDictionary:(id)a0 type:(unsigned long long)a1;
- (unsigned long long)hash;
- (void)ingestExtendedAccountDetails:(id)a0;

@end
