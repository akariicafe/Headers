@class NSString, NSObject;
@protocol ENRegionMonitorSourceDelegate;

@interface ENRegionTestDataSource : NSObject <ENRegionMonitorDataSource>

@property (weak, nonatomic) NSObject<ENRegionMonitorSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startMonitoring;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopMonitoring;
- (id)initWithDelegate:(id)a0;
- (id)currentRegionVisit;
- (void)regionChanged;

@end
