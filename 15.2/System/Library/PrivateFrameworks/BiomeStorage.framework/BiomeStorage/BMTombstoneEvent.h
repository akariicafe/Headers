@class NSString;

@interface BMTombstoneEvent : NSObject <BMProtoBufWrapper, NSSecureCoding, BMStoreData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *segmentName;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long deletionReason;
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
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)initWithSegmentName:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 reason:(unsigned long long)a3;
- (id)initWithSegmentName:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2;

@end
