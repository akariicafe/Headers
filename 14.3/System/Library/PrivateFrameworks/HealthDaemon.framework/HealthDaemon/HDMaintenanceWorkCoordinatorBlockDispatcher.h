@class NSString, HDMaintenanceWorkCoordinator;

@interface HDMaintenanceWorkCoordinatorBlockDispatcher : NSObject <HDBlockDispatcher> {
    HDMaintenanceWorkCoordinator *_maintenanceWorkCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
