@class NSString;

@interface ATXUnifiedInferredActivityTransition : NSObject <BMStoreData, ATXTimedEventProtocol, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double transitionTime;
@property (readonly, nonatomic) BOOL isEntryEvent;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *mode;
@property (readonly, nonatomic) unsigned long long inferredActivityType;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)eventTime;
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
- (unsigned long long)activityTypeAfterTransition;
- (BOOL)isEqualToATXUnifiedInferredActivityTransition:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initFromTransitionTime:(double)a0 isEntryEvent:(BOOL)a1 source:(id)a2 mode:(id)a3;
- (id)encodeAsProto;
- (id)json;
- (id)initFromTransitionTime:(double)a0 isEntryEvent:(BOOL)a1 source:(id)a2 activityType:(unsigned long long)a3 confidence:(double)a4;

@end
