@class NSMutableDictionary, NSMutableArray;

@interface CKDZoneGatekeeperImplementation : NSObject

@property (retain, nonatomic) NSMutableDictionary *zoneIDsToGateHolders;
@property (retain, nonatomic) NSMutableArray *waiterWrappers;

- (BOOL)hasStatusToReport;
- (id)CKStatusReportArray;
- (void)registerWaiter:(id)a0 forZoneIDs:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)relinquishLocksForWaiter:(id)a0 deferRelinquish:(BOOL)a1;

@end
