@class NSArray, NSString, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerDataCollector : NSObject <CSSiriClientBehaviorMonitorDelegate, CSVoiceTriggerEnabledMonitorDelegate>

@property (retain, nonatomic) NSMutableArray *vteiList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *lastVTEnableDate;
@property (retain, nonatomic) NSDate *lastVTDisableDate;
@property (retain, nonatomic) NSArray *privacyApprovedFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)CSVoiceTriggerEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)_createAndSubmitRejectLoggingDictWithSource:(id)a0 withPHSAcceptInfo:(id)a1;
- (id)_filteredVTEIArray;
- (void)_submitToggleReport;
- (void)addVTAcceptEntryAndSubmit:(id)a0;
- (void)addVTRejectEntry:(id)a0 truncateData:(BOOL)a1;
- (id)fetchVoiceTriggerHeartBeatMetrics;

@end
