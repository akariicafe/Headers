@class NSString;

@interface PKTransitAppletStateDirty : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *passUniqueIdentifier;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *dpanIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPKTransitAppletStateDirty:(id)a0;
- (id)initWithPassUniqueIdentifier:(id)a0 paymentApplication:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
