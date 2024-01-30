@class AWDLibnetcoreStatsReport, NSString, NWStatisticsManager, NSObject;
@protocol OS_dispatch_queue;

@interface KernelStatisticsHandler : NSObject <NWStatisticsManagerDelegate, ConfigurableObjectProtocol>

@property (retain) NWStatisticsManager *nwStatManager;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) AWDLibnetcoreStatsReport *kernelStatisticsReport;
@property unsigned int coalescedReportPending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (int)configureInstance:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (void)coalescedReport;
- (void)statisticsManager:(id)a0 didReceiveDirectSystemInformation:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
