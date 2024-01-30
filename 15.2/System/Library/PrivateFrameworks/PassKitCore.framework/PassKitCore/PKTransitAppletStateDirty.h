@class NSString;

@interface PKTransitAppletStateDirty : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *passUniqueIdentifier;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *dpanIdentifier;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToPKTransitAppletStateDirty:(id)a0;
- (id)initWithPassUniqueIdentifier:(id)a0 paymentApplication:(id)a1;
- (unsigned long long)hash;

@end
