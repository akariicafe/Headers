@class NSUUID, HMAudioAnalysisEventBulletin;

@interface HMAudioAnalysisStereoPairDetectedEvent : NSObject

@property (copy) HMAudioAnalysisEventBulletin *event;
@property unsigned long long state;
@property (copy) NSUUID *notificationUUID;

- (void).cxx_destruct;
- (id)initWithEventBulletin:(id)a0 state:(unsigned long long)a1 notificationUUID:(id)a2;

@end
