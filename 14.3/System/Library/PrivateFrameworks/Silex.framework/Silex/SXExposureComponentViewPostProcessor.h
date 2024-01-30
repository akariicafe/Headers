@class NSString, NSMapTable;
@protocol SXAnalyticsReportingProvider, SXComponentExposureMonitor;

@interface SXExposureComponentViewPostProcessor : NSObject <SXComponentViewPostProcessor>

@property (readonly, nonatomic) id<SXComponentExposureMonitor> monitor;
@property (readonly, nonatomic) id<SXAnalyticsReportingProvider> analyticsReporterProvider;
@property (readonly, nonatomic) NSMapTable *exposedEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)processComponent:(id)a0 view:(id)a1;
- (id)initWithExposureMonitor:(id)a0 analyticsReportingProvider:(id)a1;

@end
