@class NSString;

@interface BMSiriInferredHelpfulnessEvent : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) double inferredHelpfulnessScore;
@property (readonly, nonatomic) double restatementScore;
@property (readonly, copy, nonatomic) NSString *turnID;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)jsonDict;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithAbsoluteTimestamp:(double)a0;
- (id)initWithAbsoluteTimestamp:(double)a0 inferredHelpfulnessScore:(double)a1 restatementScore:(double)a2 turnID:(id)a3 modelID:(id)a4;
- (BOOL)isEqualToSiriInferredHelpfulnessEvent:(id)a0;

@end
