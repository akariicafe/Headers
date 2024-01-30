@class NSUUID, NSString;

@interface HMDWatchConnectivityLogEvent : HMDLogEvent <HMDAWDLogEvent>

@property (class, readonly) NSUUID *uuid;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long watchAddedNotificationCount;
@property (nonatomic) unsigned long long watchRemovedNotificationCount;
@property (nonatomic, getter=isReportComplete) BOOL reportComplete;

+ (void)initialize;

- (id)init;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
