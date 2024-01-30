@class ATXAnchorModelPBActionKeyMetadata, NSMutableArray, ATXAnchorModelPBAppLaunchMetadata;

@interface ATXAnchorModelPBActionMetadata : PBCodable <NSCopying> {
    struct { unsigned char actionType : 1; } _has;
}

@property (nonatomic) BOOL hasActionType;
@property (nonatomic) int actionType;
@property (readonly, nonatomic) BOOL hasAppLaunchMetadata;
@property (retain, nonatomic) ATXAnchorModelPBAppLaunchMetadata *appLaunchMetadata;
@property (readonly, nonatomic) BOOL hasActionKeyMetadata;
@property (retain, nonatomic) ATXAnchorModelPBActionKeyMetadata *actionKeyMetadata;
@property (retain, nonatomic) NSMutableArray *actionUUIDMetadatas;

+ (Class)actionUUIDMetadataType;

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
- (id)actionTypeAsString:(int)a0;
- (int)StringAsActionType:(id)a0;
- (unsigned long long)actionUUIDMetadatasCount;
- (void)addActionUUIDMetadata:(id)a0;
- (void)clearActionUUIDMetadatas;
- (id)actionUUIDMetadataAtIndex:(unsigned long long)a0;

@end
