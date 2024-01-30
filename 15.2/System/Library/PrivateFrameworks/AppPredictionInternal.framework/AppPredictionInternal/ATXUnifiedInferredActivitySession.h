@class NSString;

@interface ATXUnifiedInferredActivitySession : NSObject <BMStoreData, NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) NSString *inferredMode;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) unsigned long long inferredActivityType;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder_v1:(id)a0;
- (id)initWithCoder_v2:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (id)prettyRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)json;
- (id)initFromStartTime:(double)a0 endTime:(double)a1 inferredMode:(id)a2 source:(id)a3;
- (BOOL)isEqualToATXUnifiedInferredActivitySession:(id)a0;
- (id)initFromStartTime:(double)a0 endTime:(double)a1 source:(id)a2 activityType:(unsigned long long)a3 confidence:(double)a4;

@end
