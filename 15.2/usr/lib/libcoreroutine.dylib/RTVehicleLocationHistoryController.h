@class NSManagedObjectContext, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface RTVehicleLocationHistoryController : NSObject <RTPurgable>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (id)_getAllVehicleEventsFromHistory;
- (BOOL)_persistVehicleEventToHistory:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 managedObjectContext:(id)a1;
- (BOOL)_deleteVehicleEventsBeforeDate:(id)a0;
- (BOOL)_evaluateUsualLocationWithVehicleEvent:(id)a0;

@end
