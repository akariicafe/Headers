@class NSString, PKVirtualCard, NSDate;

@interface WBSCreditCardData : NSObject

@property (copy, nonatomic) NSString *cardName;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *cardNumber;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *cardSecurityCode;
@property (readonly, nonatomic) PKVirtualCard *virtualCard;
@property (readonly) BOOL shouldHide;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCardName:(id)a0 number:(id)a1 cardholderName:(id)a2 expirationDate:(id)a3 securityCode:(id)a4;
- (id)_expirationDateFromPKVirtualCard:(id)a0;
- (id)initWithCardName:(id)a0 number:(id)a1 cardholderName:(id)a2 expirationDate:(id)a3;
- (id)creditCardDataByUpdatingLastUsedDate:(id)a0;
- (id)initWithVirtualCard:(id)a0;
- (id)initWithVirtualCardCredentials:(id)a0 virtualCard:(id)a1;
- (id)initWithKeychainRepresentation:(id)a0;
- (id)keychainRepresentationForNewCard;
- (id)keychainRepresentationByMigratingExistingKeychainData:(id)a0;
- (id)creditCardDataByMergingCardholderNameAndExpirationDateFromCard:(id)a0;
- (BOOL)hasSameCreditCardInformationAs:(id)a0;

@end
