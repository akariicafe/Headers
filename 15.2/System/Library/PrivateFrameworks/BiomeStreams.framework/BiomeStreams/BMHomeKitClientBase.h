@class NSString, NSDateInterval;

@interface BMHomeKitClientBase : NSObject <BMStoreData, BMProtoBufWrapper>

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) NSString *homeUniqueIdentifier;
@property (readonly, nonatomic) int homeOccupancy;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSString *clientName;
@property (readonly, copy, nonatomic) NSString *eventCorrelationIdentifier;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)initWithDateInterval:(id)a0 homeUniqueIdentifier:(id)a1 homeOccupancy:(int)a2 source:(id)a3 clientName:(id)a4 eventCorrelationIdentifier:(id)a5;

@end
