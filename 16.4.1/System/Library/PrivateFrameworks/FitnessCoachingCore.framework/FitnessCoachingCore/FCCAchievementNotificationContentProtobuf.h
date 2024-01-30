@class NSData;

@interface FCCAchievementNotificationContentProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAchievementData;
@property (retain, nonatomic) NSData *achievementData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
