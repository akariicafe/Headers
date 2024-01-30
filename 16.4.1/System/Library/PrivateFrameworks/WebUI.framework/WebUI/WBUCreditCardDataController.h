@interface WBUCreditCardDataController : WBSCreditCardDataController

+ (id)sharedCreditCardDataController;

- (BOOL)_shouldOfferVirtualCards;
- (BOOL)hasUsedNonVirtualCard;
- (void)setHasUsedNonVirtualCard;
- (unsigned long long)virtualCardFieldsToRequest;

@end
