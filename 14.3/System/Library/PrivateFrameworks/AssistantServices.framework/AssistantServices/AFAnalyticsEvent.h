@class NSData;

@interface AFAnalyticsEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long deliveryStream;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) long long contextDataType;
@property (readonly, copy, nonatomic) NSData *contextData;

+ (id)eventsReferenceTime;

- (id)init;
- (id)typeName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDeliveryStream:(unsigned long long)a0 type:(long long)a1 timestamp:(unsigned long long)a2 contextDataType:(long long)a3 contextData:(id)a4;
- (id)contextDataAsDictionary;
- (unsigned long long)hash;
- (id)contextDataAsProtobuf;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dateStamp;
- (id)legacyTypeName;

@end
