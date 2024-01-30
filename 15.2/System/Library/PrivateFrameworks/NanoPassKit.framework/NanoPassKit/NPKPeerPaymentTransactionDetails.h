@class NSString, NSArray, NSDate, PKPaymentTransaction;

@interface NPKPeerPaymentTransactionDetails : NSObject

@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) unsigned long long paymentStatus;
@property (retain, nonatomic) NSArray *availableActions;
@property (retain, nonatomic) NSDate *availableActionsFetchDate;

- (id)description;
- (void).cxx_destruct;

@end
