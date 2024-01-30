@class PKPaymentPass, NSArray, PKTransitAppletState, NSSet, PKTransitPassProperties;

@interface NPKPassAssociatedInfoModel : NSObject

@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) NSArray *balanceFields;
@property (readonly, nonatomic) NSArray *commutePlanFields;
@property (readonly, nonatomic) NSArray *allPassItemsFields;
@property (retain, nonatomic) PKTransitAppletState *transitAppletState;
@property (retain, nonatomic) PKTransitPassProperties *transitPassProperties;
@property (copy, nonatomic) NSSet *balances;
@property (nonatomic, getter=isCommutePlanValueRequired) BOOL commutePlanValueRequired;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPass:(id)a0;
- (id)initWithPass:(id)a0 transitProperties:(id)a1 balances:(id)a2 commutePlanValueRequired:(BOOL)a3;
- (void)updateItemFields;
- (id)_balanceByIDWithBalances:(id)a0;
- (id)_primaryDisplayableBalanceFieldWithBalancesByID:(id)a0;
- (id)_allPassBalanceFieldsWithBalancesByID:(id)a0;
- (id)_commutePlanFieldsWithBalancesByID:(id)a0;
- (id)_balancePassFieldsFromPass:(id)a0;
- (id)_balanceFieldsWithBalancesByID:(id)a0 passFields:(id)a1 maximumCount:(unsigned long long)a2;
- (id)_actionWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)_balanceFieldWithPassField:(id)a0 balance:(id)a1 isPrimaryBalance:(BOOL)a2;
- (BOOL)_shouldAddCommutePlan:(id)a0 action:(id)a1 withBalancesByID:(id)a2;
- (id)_formattedValueWithCommutePlan:(id)a0 balancesByID:(id)a1;
- (id)_commutePlanWithFelicaPassProperties:(id)a0;
- (id)_identifierFromAction:(id)a0 type:(unsigned long long)a1;

@end
