@class NSData;

@interface BMSiriMemoryReferenceResolutionEntityValue : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) double timestamp;
@property (readonly, copy, nonatomic) NSData *valueData;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithTimestamp:(double)a0 valueData:(id)a1;

@end
