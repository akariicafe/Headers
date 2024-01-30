@class NSString, NSMutableArray;

@interface ATXPBBlendingSessionERMEvent : PBCodable <NSCopying> {
    struct { unsigned char engagementType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExecutableId;
@property (retain, nonatomic) NSString *executableId;
@property (nonatomic) BOOL hasEngagementType;
@property (nonatomic) int engagementType;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (retain, nonatomic) NSMutableArray *blendingUpdateUUIDs;

+ (Class)blendingUpdateUUIDType;

- (int)StringAsEngagementType:(id)a0;
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
- (id)engagementTypeAsString:(int)a0;
- (void)addBlendingUpdateUUID:(id)a0;
- (unsigned long long)blendingUpdateUUIDsCount;
- (void)clearBlendingUpdateUUIDs;
- (id)blendingUpdateUUIDAtIndex:(unsigned long long)a0;

@end
