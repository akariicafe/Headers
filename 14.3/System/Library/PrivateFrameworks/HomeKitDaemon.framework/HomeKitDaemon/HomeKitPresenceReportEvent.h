@class AWDHomeKitPresenceReport, NSString;

@interface HomeKitPresenceReportEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly, nonatomic) AWDHomeKitPresenceReport *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)uuid;

@end
