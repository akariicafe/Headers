@class PSSpecifier, NSString, PSUICellularPlanUniversalReference, CTCellularPlanItem;

@interface PSUICellularPlanConvertedController : PSListController

@property (retain, nonatomic) CTCellularPlanItem *planItem;
@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference;
@property (weak) PSSpecifier *weakStatusSpecifier;
@property (weak) PSSpecifier *weakReactivateSpecifier;
@property (retain) NSString *planStatus;

- (id)getLogger;
- (void)dealloc;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (id)_phoneNumberSpecifier;
- (id)_labelSpecifier;
- (void)_cellularPlanChanged:(id)a0;
- (void)_maybeAddRemoveCellularPlanSpecifier:(id)a0;
- (id)_phoneNumber:(id)a0;
- (id)_planLabel:(id)a0;
- (id)_reactivateSIMSpecifier;
- (id)_removeSIMSpecifier;
- (id)_simTypeSpecifier;
- (id)_status:(id)a0;
- (id)_statusSpecifier;
- (id)_turnOnThisLineSpecifier;
- (void)_updatePlanStatus:(id)a0;
- (void)_updateReactivateSpecifier:(id)a0;
- (void)_updateStatusSpecifier:(id)a0;

@end
