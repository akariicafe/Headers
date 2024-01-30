@class NSUUID, NSString;

@interface HMDProcessMemoryPressureNotificationLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging, HMDAWDLogEvent>

@property (class, readonly) NSUUID *uuid;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *processMemoryState;
@property (readonly, nonatomic) NSString *dataSyncState;

+ (void)initialize;
+ (id)createEventWithProcessMemoryState:(id)a0 dataSyncState:(id)a1;

- (id)eventName;
- (void).cxx_destruct;
- (id)serializedEvent;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (id)initWithProcessMemoryState:(id)a0 dataSyncState:(id)a1;

@end
