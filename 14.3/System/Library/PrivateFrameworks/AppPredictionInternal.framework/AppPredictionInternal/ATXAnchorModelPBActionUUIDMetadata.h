@class ATXAnchorModelPBLaunchHistoryMetadata;

@interface ATXAnchorModelPBActionUUIDMetadata : PBCodable <NSCopying> {
    struct { unsigned char actionUUID : 1; unsigned char slotHash : 1; unsigned char paramCount : 1; } _has;
}

@property (nonatomic) BOOL hasActionUUID;
@property (nonatomic) long long actionUUID;
@property (nonatomic) BOOL hasSlotHash;
@property (nonatomic) long long slotHash;
@property (nonatomic) BOOL hasParamCount;
@property (nonatomic) unsigned int paramCount;
@property (readonly, nonatomic) BOOL hasActionUUIDLaunchHistory;
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *actionUUIDLaunchHistory;

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

@end
