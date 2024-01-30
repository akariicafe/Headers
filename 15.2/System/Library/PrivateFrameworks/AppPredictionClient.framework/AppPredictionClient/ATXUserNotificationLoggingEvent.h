@class ATXUserNotification, NSString;

@interface ATXUserNotificationLoggingEvent : NSObject <BMStoreData, NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXUserNotification *notification;
@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) unsigned long long deliveryReason;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (BOOL)eventCausesNotificationNonprominence;
- (id)initFromUserNotification:(id)a0 eventType:(long long)a1 timestamp:(double)a2 deliveryReason:(unsigned long long)a3 modeIdentifier:(id)a4;
- (BOOL)isEqualToATXUserNotificationLoggingEvent:(id)a0;
- (id)initFromUserNotification:(id)a0 eventType:(long long)a1 timestamp:(double)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)eventCausesNotificationInactivity;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodeAsProto;
- (id)json;
- (id)initFromUserNotification:(id)a0 eventType:(long long)a1 timestamp:(double)a2 deliveryReason:(unsigned long long)a3;
- (BOOL)isReceiveEvent;

@end
