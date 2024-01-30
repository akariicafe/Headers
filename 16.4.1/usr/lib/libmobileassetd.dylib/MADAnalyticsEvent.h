@class NSString, NSMutableDictionary, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MADAnalyticsEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *mutableEventPayload;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *eventUUID;
@property (readonly, retain, nonatomic) NSDictionary *eventPayload;

+ (id)eventWithName:(id)a0 payload:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void)setEventPayloadEntryToNull:(id)a0;
- (void)_queue_setEventPayloadEntryToNull:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEventPayloadEntry:(id)a0 value:(id)a1;
- (id)initWithEventName:(id)a0;
- (void)_queue_removeEventPayloadEntry:(id)a0;
- (void)removeEventPayloadEntry:(id)a0;
- (id)init;
- (id)description;
- (void)_queue_setEventPayloadEntry:(id)a0 value:(id)a1;
- (void).cxx_destruct;

@end
