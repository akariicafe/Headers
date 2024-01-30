@class NSData, NSString;

@interface AFAnalyticsEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long deliveryStream;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) long long contextDataType;
@property (readonly, copy, nonatomic) NSData *contextData;
@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *speechId;

+ (id)eventsReferenceTime;

- (id)typeName;
- (id)dateStamp;
- (id)contextDataAsProtobuf;
- (void)encodeWithCoder:(id)a0;
- (id)legacyTypeName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contextDataAsDictionary;
- (unsigned long long)hash;
- (id)initWithDeliveryStream:(unsigned long long)a0 type:(long long)a1 timestamp:(unsigned long long)a2 contextDataType:(long long)a3 contextData:(id)a4;

@end
