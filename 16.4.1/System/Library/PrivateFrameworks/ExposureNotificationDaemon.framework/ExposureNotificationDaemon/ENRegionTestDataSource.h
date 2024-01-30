@class NSString, NSObject;
@protocol ENRegionMonitorSourceDelegate;

@interface ENRegionTestDataSource : NSObject <ENRegionMonitorDataSource>

@property (weak, nonatomic) NSObject<ENRegionMonitorSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentRegionVisit;
- (void)startMonitoring;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)regionChanged;

@end
