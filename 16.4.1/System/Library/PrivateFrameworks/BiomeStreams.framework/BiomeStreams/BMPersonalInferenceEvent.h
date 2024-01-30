@class NSArray, NSString, NSNumber, BMPersonalFact;

@interface BMPersonalInferenceEvent : NSObject <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) BMPersonalFact *fact;
@property (readonly, nonatomic) unsigned int modelVersion;
@property (readonly, nonatomic) NSNumber *confidence;
@property (readonly, nonatomic) NSArray *qualifiers;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithFact:(id)a0 modelVersion:(unsigned int)a1 confidence:(id)a2 qualifiers:(id)a3;

@end
