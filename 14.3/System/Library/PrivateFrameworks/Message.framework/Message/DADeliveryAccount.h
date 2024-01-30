@class DAMailAccount;

@interface DADeliveryAccount : DeliveryAccount {
    DAMailAccount *_DAMailAccount;
}

+ (id)accountTypeIdentifier;

- (void).cxx_destruct;
- (id)newDeliveryWithMessage:(id)a0;
- (id)newDeliveryWithHeaders:(id)a0 mixedContent:(id)a1 textPartsAreHTML:(BOOL)a2;
- (id)newDeliveryWithHeaders:(id)a0 HTML:(id)a1 plainTextAlternative:(id)a2 other:(id)a3;
- (id)initWithDAMailAccount:(id)a0;
- (Class)deliveryClass;
- (id)mailAccountIfAvailable;

@end
