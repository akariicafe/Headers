@interface BMPBMindfulnessSessionEvent : PBCodable <NSCopying> {
    struct { unsigned char sessionType : 1; unsigned char stateType : 1; } _has;
}

@property (nonatomic) BOOL hasSessionType;
@property (nonatomic) int sessionType;
@property (nonatomic) BOOL hasStateType;
@property (nonatomic) int stateType;

- (int)StringAsStateType:(id)a0;
- (id)stateTypeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (int)StringAsSessionType:(id)a0;
- (unsigned long long)hash;
- (id)sessionTypeAsString:(int)a0;
- (id)dictionaryRepresentation;

@end
