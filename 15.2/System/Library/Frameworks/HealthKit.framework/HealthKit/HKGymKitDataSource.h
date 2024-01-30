@class NSUUID, HKTaskServerProxyProvider, HKHealthStore, NSString;

@interface HKGymKitDataSource : NSObject <_HKXPCExportable, HKWorkoutDataSource>

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConfigurationWithWorkoutConfiguration:(id)a0;
+ (id)serverInterface;
+ (id)clientInterface;

- (void)connectionInvalidated;
- (void)workoutBuilderDidFinish;
- (id)initWithHealthStore:(id)a0 workoutConfiguration:(id)a1;
- (id)remoteInterface;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (void)_startTaskServerIfNeeded;

@end
