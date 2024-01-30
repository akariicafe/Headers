@class NSString, HMDMicroLocationManager;
@protocol HMDMicroLocationLogEventObserverDataSource;

@interface HMDMicroLocationLogEventObserver : HMFObject <HMFLogging, HMMLogEventObserver> {
    HMDMicroLocationManager *_microLocationManager;
    id<HMDMicroLocationLogEventObserverDataSource> _dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (id)initWithDataSource:(id)a0 microLocationManager:(id)a1;

@end
