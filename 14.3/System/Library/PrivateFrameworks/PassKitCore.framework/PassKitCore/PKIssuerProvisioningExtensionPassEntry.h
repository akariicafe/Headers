@class NSString;

@interface PKIssuerProvisioningExtensionPassEntry : NSObject

@property (nonatomic) long long type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) struct CGImage { } *art;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)paymentPassEntry;
- (id)_initWithType:(long long)a0 identifier:(id)a1 title:(id)a2 art:(struct CGImage { } *)a3;
- (void)encodeWithCoder:(id)a0;

@end
