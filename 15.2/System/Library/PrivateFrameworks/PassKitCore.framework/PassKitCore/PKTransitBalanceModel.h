@class PKPaymentPass, NSString, NSArray, NSDictionary, PKTransitPassProperties, NSMutableArray;

@interface PKTransitBalanceModel : NSObject {
    NSDictionary *_balancesByID;
    PKTransitPassProperties *_transitProperties;
    PKPaymentPass *_pass;
}

@property (readonly, nonatomic) NSString *primaryDisplayableBalance;
@property (readonly, nonatomic) NSString *displayableListOfBalances;
@property (readonly, nonatomic) NSArray *displayableBalances;
@property (readonly, nonatomic) NSArray *displayableCurrencyBalances;
@property (readonly, nonatomic) NSArray *displayablePointsBalances;
@property (readonly, nonatomic) NSArray *displayableCommutePlanBalances;
@property (readonly, nonatomic) NSArray *transitCommutePlans;
@property (readonly, nonatomic) NSArray *displayableCommutePlans;
@property (retain, nonatomic) NSMutableArray *balanceFields;
@property (readonly, nonatomic) BOOL hasBalanceContent;
@property (readonly, nonatomic) BOOL hasCurrencyBalance;
@property (readonly, nonatomic) BOOL hasPointsBalance;
@property (readonly, nonatomic) BOOL hasPositiveBalance;
@property (readonly, nonatomic) BOOL hasCommutePlanContent;

- (id)primaryDisplayableBalance;
- (id)balanceForIdentifiers:(id)a0;
- (void)updateWithDynamicCommutePlans:(id)a0;
- (id)filteredActionsForDisplayableEntities;
- (id)initWithPass:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTransitProperties:(id)a0;
- (void)_updateBalancesAndPlans;
- (void)setDynamicBalancesByID:(id)a0;
- (void)setTransitProperties:(id)a0 andApplyStoredValueBalances:(BOOL)a1;
- (void)applyStoredValueBalancesFromProperties:(id)a0;
- (void)setDynamicBalances:(id)a0;

@end
