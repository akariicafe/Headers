@class NSString, ATXUserNotificationDigest;

@interface ATXUserNotificationDigestLoggingEvent : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXUserNotificationDigest *notificationDigest;
@property (nonatomic) long long eventType;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)json;
- (id)jsonDict;
- (id)initWithNotificationDigest:(id)a0 eventType:(long long)a1 timestamp:(double)a2;

@end
