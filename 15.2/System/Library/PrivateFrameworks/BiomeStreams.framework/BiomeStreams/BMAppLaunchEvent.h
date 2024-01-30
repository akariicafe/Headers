@class NSString, NSDateInterval;

@interface BMAppLaunchEvent : BMEventBase <BMEventBinaryStepping, BMEventTimeElapsing, BMEventAppAssociating, BMStoreData, NSSecureCoding, BMProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *launchReason;
@property (nonatomic) unsigned long long launchType;
@property (nonatomic, getter=isStarting) BOOL starting;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)initWithStarting:(BOOL)a0 bundleId:(id)a1 absoluteTimeStamp:(double)a2 launchReason:(id)a3 launchType:(unsigned long long)a4;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithStarting:(BOOL)a0 bundleId:(id)a1 absoluteTimeStamp:(double)a2 duration:(double)a3 launchReason:(id)a4 launchType:(unsigned long long)a5;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)json;
- (id)jsonDict;

@end
