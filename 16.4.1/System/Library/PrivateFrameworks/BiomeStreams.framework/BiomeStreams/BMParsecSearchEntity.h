@class NSString, NSArray;

@interface BMParsecSearchEntity : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int category;
@property (readonly, nonatomic) float probabilityScore;
@property (readonly, nonatomic) NSArray *topics;
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
- (id)initWithName:(id)a0 category:(unsigned int)a1 probabilityScore:(float)a2 topics:(id)a3;

@end
