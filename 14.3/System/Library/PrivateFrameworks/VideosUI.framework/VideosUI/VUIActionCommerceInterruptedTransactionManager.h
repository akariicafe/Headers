@class NSDictionary;

@interface VUIActionCommerceInterruptedTransactionManager : NSObject {
    NSDictionary *interruptedOfferDetails;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)getLastInterruptedOfferDetails;
- (void)setLastInterruptedOfferDetails:(id)a0;

@end
