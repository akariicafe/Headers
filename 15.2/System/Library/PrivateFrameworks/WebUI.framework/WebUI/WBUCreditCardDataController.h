@interface WBUCreditCardDataController : WBSCreditCardDataController

+ (id)sharedCreditCardDataController;

- (BOOL)_shouldOfferVirtualCards;
- (unsigned long long)virtualCardFieldsToRequest;
- (BOOL)hasUsedNonVirtualCard;
- (void)setHasUsedNonVirtualCard;

@end
