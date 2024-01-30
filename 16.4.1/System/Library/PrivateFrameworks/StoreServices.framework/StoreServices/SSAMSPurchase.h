@class NSNumber, NSString;

@interface SSAMSPurchase : AMSPurchase <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *mediaType;
@property (nonatomic, getter=isPreauthenticated) BOOL preauthenticated;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqualToPurchase:(id)a0;

@end
