@class NSString;

@interface HMDWatchConnectivityLogEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long watchAddedNotificationCount;
@property (nonatomic) unsigned long long watchRemovedNotificationCount;
@property (nonatomic, getter=isReportComplete) BOOL reportComplete;

- (id)init;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
