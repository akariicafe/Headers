@class AWDHomeKitPresenceReport, NSString;

@interface HomeKitPresenceReportEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly, nonatomic) AWDHomeKitPresenceReport *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
