@class NSDistributedNotificationCenter;
@protocol NPKVehicleConnectivityCoordinatorDelegate;

@interface NPKVehicleConnectivityCoordinator : NSObject {
    NSDistributedNotificationCenter *_distributedNotificationCenter;
}

@property (weak, nonatomic) id<NPKVehicleConnectivityCoordinatorDelegate> delegate;

+ (id)_subcredentialIdentifierForPass:(id)a0;
+ (id)_secureElementPassMatchingAID:(id)a0 subcredentialIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (void)_registerObservers;
- (id)initWithDistributedNotificationCenter:(id)a0;
- (void)_handleCarKeyVehicleConnectedNotification:(id)a0;
- (void)_handleCarKeyVehicleDisconnectedNotification:(id)a0;
- (void)_parseVehicleConnectivityChangeNotificationObject:(id)a0 outApplicationIdentifier:(id *)a1 outSubcredentialIdentifier:(id *)a2;
- (BOOL)isVehicleConnectedForPass:(id)a0;

@end
