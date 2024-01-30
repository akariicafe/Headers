@class NSString, NSArray, NSUUID, NSDate;

@interface ATXLightweightClientModelCacheUpdate : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (readonly, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSDate *cacheCreationDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)json;
- (id)encodeAsProto;
- (id)jsonDict;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithClientModelCacheUpdate:(id)a0;
- (id)initWithClientModelId:(id)a0 suggestions:(id)a1 uuid:(id)a2 cacheCreationDate:(id)a3;
- (BOOL)isEqualToATXLightweightClientModelCacheUpdate:(id)a0;

@end
