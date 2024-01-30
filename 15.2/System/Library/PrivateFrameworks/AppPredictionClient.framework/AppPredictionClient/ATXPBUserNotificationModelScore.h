@class NSString, NSData;

@interface ATXPBUserNotificationModelScore : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char modelVersion : 1; unsigned char score : 1; unsigned char scoreTimestamp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasModelId;
@property (retain, nonatomic) NSString *modelId;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) unsigned long long modelVersion;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasScoreTimestamp;
@property (nonatomic) double scoreTimestamp;
@property (readonly, nonatomic) BOOL hasScoreUUID;
@property (retain, nonatomic) NSString *scoreUUID;
@property (readonly, nonatomic) BOOL hasScoreInfo;
@property (retain, nonatomic) NSData *scoreInfo;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
