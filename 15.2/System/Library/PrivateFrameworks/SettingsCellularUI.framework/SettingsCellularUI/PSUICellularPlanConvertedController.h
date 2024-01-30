@class CTCellularPlanItem, PSUICellularPlanUniversalReference;

@interface PSUICellularPlanConvertedController : PSListController

@property (retain, nonatomic) CTCellularPlanItem *plan;
@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference;

- (id)specifiers;
- (void).cxx_destruct;
- (id)_phoneNumberSpecifier;
- (id)_removeSIMSpecifier;
- (id)_carrierNameSpecifier;
- (id)_labelSpecifier;
- (id)_turnOnThisLineSpecifier;
- (id)_planLabel:(id)a0;
- (id)_phoneNumber:(id)a0;

@end
