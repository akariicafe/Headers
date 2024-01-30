@class TUCallCenter, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TURTCCallReporter : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *callUUIDToConversation;
@property (readonly, nonatomic) TUCallCenter *callCenter;

- (void)callStatusChangedNotification:(id)a0;
- (id)serviceName:(id)a0 withConversation:(id)a1;
- (id)reportingSessionForCall:(id)a0 withConversation:(id)a1;
- (id)clientName:(id)a0;
- (id)rtcCallInfoDictionary:(id)a0 withConversation:(id)a1;
- (id)initWithCallCenter:(id)a0;
- (void)report:(id)a0 withConversation:(id)a1;
- (void).cxx_destruct;

@end
