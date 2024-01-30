@class NSDictionary;

@interface VUIActionCommerceInterruptedTransactionManager : NSObject {
    NSDictionary *interruptedOfferDetails;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)setLastInterruptedOfferDetails:(id)a0;
- (id)getLastInterruptedOfferDetails;

@end
