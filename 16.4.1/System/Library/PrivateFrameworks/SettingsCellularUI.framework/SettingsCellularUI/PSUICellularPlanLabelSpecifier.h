@class PSUICellularPlanUniversalReference, PSUICellularPlanManagerCache;

@interface PSUICellularPlanLabelSpecifier : PSSpecifier

@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference;

- (id)getLogger;
- (void).cxx_destruct;
- (id)cellularPlanLabel:(id)a0;
- (id)initWithPlanUniversalReference:(id)a0 planManagerCache:(id)a1;
- (void)updateValuesAndTitles;

@end
