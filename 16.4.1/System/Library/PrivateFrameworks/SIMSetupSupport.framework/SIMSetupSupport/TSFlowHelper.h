@interface TSFlowHelper : NSObject

+ (long long)_slotForPlanItem:(id)a0;
+ (BOOL)handleStartOverAgainstNoPlan:(id)a0 navigationController:(id)a1 completion:(id /* block */)a2;
+ (BOOL)hasTransferablePlanWithSameCarrier:(id)a0 transferablePlans:(id)a1 inBuddy:(BOOL)a2 matchingSODACarrierWebsheetTransferPlanIndex:(id)a3;
+ (void)registerIMessageWithPlanItems:(id)a0;
+ (id)unregisteredSelectedPlanItems:(id)a0;

@end
