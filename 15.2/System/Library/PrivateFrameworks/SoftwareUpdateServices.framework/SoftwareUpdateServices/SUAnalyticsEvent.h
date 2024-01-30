@class NSString, NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SUAnalyticsEvent : NSObject <NSSecureCoding> {
    NSMutableDictionary *_mutableEventPayload;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *eventUUID;
@property (readonly, retain, nonatomic) NSDictionary *eventPayload;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithEventName:(id)a0;
- (void)_queue_setEventPayloadEntryToNull:(id)a0;
- (void)_queue_removeEventPayloadEntry:(id)a0;
- (void)setEventPayloadEntryToNull:(id)a0;
- (void)removeEventPayloadEntry:(id)a0;
- (void)_queue_setEventPayloadEntry:(id)a0 boolValue:(BOOL)a1;
- (void)_queue_setEventPayloadEntry:(id)a0 numberValue:(id)a1;
- (void)_queue_setEventPayloadEntry:(id)a0 stringValue:(id)a1;
- (void)setEventPayloadEntry:(id)a0 boolValue:(BOOL)a1;
- (void)setEventPayloadEntry:(id)a0 numberValue:(id)a1;
- (void)setEventPayloadEntry:(id)a0 stringValue:(id)a1;

@end
