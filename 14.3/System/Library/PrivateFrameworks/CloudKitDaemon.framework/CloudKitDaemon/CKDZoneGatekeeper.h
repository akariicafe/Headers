@class NSMutableDictionary, NSMutableArray;

@interface CKDZoneGatekeeper : NSObject

@property (retain, nonatomic) NSMutableDictionary *zoneIDsToGateHolders;
@property (retain, nonatomic) NSMutableArray *waiterWrappers;

- (void)registerWaiter:(id)a0 forZoneIDs:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (id)CKStatusReportArray;
- (void).cxx_destruct;
- (BOOL)hasStatusToReport;
- (void)relinquishLocksForWaiter:(id)a0 deferRelinquish:(BOOL)a1;

@end
