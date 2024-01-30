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

- (id)initFromJSON:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
