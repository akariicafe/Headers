@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject {
    NSArray *_merchantIdentifiers;
}

@property (readonly, nonatomic) BOOL ignoreMerchantIdentifiers;
@property (readonly, nonatomic) BOOL hasMerchantIdentifiers;

- (BOOL)hasMerchantIdentifier:(id)a0;
- (void)_probeEntitlementsWithToken:(struct { unsigned int x0[8]; })a0;
- (void).cxx_destruct;
- (id)initWithToken:(struct { unsigned int x0[8]; })a0;

@end
