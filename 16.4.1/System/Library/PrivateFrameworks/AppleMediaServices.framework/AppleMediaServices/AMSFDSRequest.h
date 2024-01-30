@class NSString, AMSFDSOptions, ACAccount, NSNumber;

@interface AMSFDSRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *logKey;
@property (readonly, nonatomic) AMSFDSOptions *options;
@property (readonly, copy, nonatomic) NSNumber *purchaseIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPurchaseIdentifier:(id)a0 account:(id)a1 options:(id)a2;

@end
