@class NSArray;

@interface DKNotableUserDataWallet : NSObject

@property (nonatomic) BOOL hasCards;
@property (retain, nonatomic) NSArray *localPaymentCards;

- (void).cxx_destruct;
- (id)initWithCards:(BOOL)a0 localPaymentCards:(id)a1;

@end
