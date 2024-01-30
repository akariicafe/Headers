@class NSString, ATXPBBlendingSessionDeviceContext, NSMutableArray, ATXPBBlendingSessionUICache;

@interface ATXPBBlendingSessionBlendingUpdate : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBlendingUpdateUUID;
@property (retain, nonatomic) NSString *blendingUpdateUUID;
@property (readonly, nonatomic) BOOL hasBlendingABGroup;
@property (retain, nonatomic) NSString *blendingABGroup;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (readonly, nonatomic) BOOL hasDeviceContext;
@property (retain, nonatomic) ATXPBBlendingSessionDeviceContext *deviceContext;
@property (retain, nonatomic) NSMutableArray *clientModelUpdates;
@property (readonly, nonatomic) BOOL hasUiCache;
@property (retain, nonatomic) ATXPBBlendingSessionUICache *uiCache;

+ (Class)clientModelUpdateType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addClientModelUpdate:(id)a0;
- (unsigned long long)clientModelUpdatesCount;
- (void)clearClientModelUpdates;
- (id)clientModelUpdateAtIndex:(unsigned long long)a0;

@end
