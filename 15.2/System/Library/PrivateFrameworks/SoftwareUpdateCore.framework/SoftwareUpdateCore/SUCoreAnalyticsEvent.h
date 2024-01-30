@class NSString, NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreAnalyticsEvent : NSObject {
    NSMutableDictionary *_mutableEventPayload;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property (readonly, retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *eventUUID;
@property (readonly, retain, nonatomic) NSDictionary *eventPayload;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithEventName:(id)a0;
- (void)_queue_setEventPayloadEntry:(id)a0 value:(id)a1;
- (void)_queue_setEventPayloadEntryToNull:(id)a0;
- (void)_queue_removeEventPayloadEntry:(id)a0;
- (void)setEventPayloadEntry:(id)a0 value:(id)a1;
- (void)setEventPayloadEntryToNull:(id)a0;
- (void)removeEventPayloadEntry:(id)a0;

@end
