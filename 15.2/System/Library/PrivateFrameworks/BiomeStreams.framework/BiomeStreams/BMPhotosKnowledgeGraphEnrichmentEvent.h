@class NSString, NSArray;

@interface BMPhotosKnowledgeGraphEnrichmentEvent : NSObject <BMIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSArray *topics;
@property (readonly, nonatomic) NSArray *entities;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)json;
- (id)jsonDict;
- (id)initWithUniqueId:(id)a0 absoluteTimestamp:(double)a1 topics:(id)a2 entities:(id)a3 locations:(id)a4 contentProtection:(id)a5;
- (id)initWithUniqueId:(id)a0 absoluteTimestamp:(double)a1 topics:(id)a2 entities:(id)a3 locations:(id)a4;

@end
