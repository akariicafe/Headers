@class NSString;

@interface HMDLogEventAnalyzer : HMFObject <HMFLogging, HMMLogEventObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)managedEventCounterRequestGroups;

- (void)didReceiveEventFromDispatcher:(id)a0;

@end
