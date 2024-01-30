@class PKPaymentPass, NSString, NSArray, NSDictionary, PKTransitPassProperties, NSMutableArray;

@interface PKTransitBalanceModel : NSObject {
    NSDictionary *_balancesByID;
    PKTransitPassProperties *_transitProperties;
    PKPaymentPass *_pass;
}

@property (readonly, nonatomic) NSString *primaryDisplayableBalance;
@property (readonly, nonatomic) NSArray *displayableBalances;
@property (readonly, nonatomic) NSArray *displayableCommutePlanBalances;
@property (readonly, nonatomic) NSArray *transitCommutePlans;
@property (readonly, nonatomic) NSArray *displayableCommutePlans;
@property (retain, nonatomic) NSMutableArray *balanceFields;
@property (readonly, nonatomic) BOOL hasBalanceContent;
@property (readonly, nonatomic) BOOL hasCommutePlanContent;

- (void)_updateBalancesAndPlans;
- (void)setDynamicBalancesByID:(id)a0;
- (void)setDynamicBalances:(id)a0;
- (id)balanceForIdentifier:(id)a0;
- (id)filteredActionsForDisplayableEntities;
- (id)primaryDisplayableBalance;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPass:(id)a0;
- (void)setTransitProperties:(id)a0;

@end
