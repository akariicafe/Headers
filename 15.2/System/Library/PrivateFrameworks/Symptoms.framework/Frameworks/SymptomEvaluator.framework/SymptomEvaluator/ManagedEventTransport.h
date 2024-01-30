@class NSMutableDictionary, NSObject;
@protocol OS_xpc_object;

@interface ManagedEventTransport : NSObject {
    unsigned long long _event_id;
    NSObject<OS_xpc_object> *_listener;
    NSMutableDictionary *_dynamicEventHandlers;
    NSMutableDictionary *_staticEventHandlers;
}

+ (id)sharedInstance;
+ (void)setListeningPort:(const char *)a0;
+ (id)feedbackForEventId:(unsigned long long)a0;
+ (unsigned long long)obtainEventId:(id)a0;
+ (BOOL)setInfoProvider:(id)a0 forId:(unsigned long long)a1;
+ (void)retireEventId:(unsigned long long)a0;

- (void)setListeningPort:(const char *)a0;
- (id)feedbackForEventId:(unsigned long long)a0;
- (unsigned long long)obtainEventId:(id)a0;
- (void)sendReplyInfo:(id)a0 onConnection:(id)a1 withErrCode:(unsigned long long)a2 forId:(unsigned long long)a3 name:(char *)a4 date:(id)a5 reason:(char *)a6 reasonCode:(unsigned long long)a7 info:(id)a8;
- (void)_createReply:(id)a0 forConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)setInfoProvider:(id)a0 forId:(unsigned long long)a1;
- (void)retireEventId:(unsigned long long)a0;

@end
