@class NSString, ENRegionVisit, NSObject, ENCoreTelephonyUtility;
@protocol OS_dispatch_queue, ENRegionMonitorSourceDelegate;

@interface ENRegionMonitorTelephonyDataSource : NSObject <ENCoreTelephonyUtilityObserver, ENRegionMonitorDataSource>

@property (copy, nonatomic) ENRegionVisit *cachedRegionVisit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataSourceQueue;
@property (retain, nonatomic) ENCoreTelephonyUtility *telephonyUtility;
@property (weak, nonatomic) NSObject<ENRegionMonitorSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (id)currentRegionVisit;
- (void)telephonyUtility:(id)a0 mobileCountryCodeChanged:(id)a1 andCountryCodeISO:(id)a2;
- (void)startMonitoring;
- (void)mobileCountryCodeChanged:(id)a0 withISOString:(id)a1;
- (void).cxx_destruct;
- (void)stopMonitoring;

@end
