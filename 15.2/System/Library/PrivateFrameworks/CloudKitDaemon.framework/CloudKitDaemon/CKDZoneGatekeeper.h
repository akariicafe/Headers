@class CKDZoneGatekeeperImplementation;

@interface CKDZoneGatekeeper : NSObject

@property (retain, nonatomic) CKDZoneGatekeeperImplementation *foreground;
@property (retain, nonatomic) CKDZoneGatekeeperImplementation *background;

+ (id)gatekeeperForContainerID:(id)a0 accountID:(id)a1;

- (BOOL)hasStatusToReport;
- (id)CKStatusReportArray;
- (void)registerWaiter:(id)a0 forZoneIDs:(id)a1 expectDelayBeforeRequestBegins:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)_init;
- (void)relinquishLocksForWaiter:(id)a0 deferRelinquish:(BOOL)a1;

@end
