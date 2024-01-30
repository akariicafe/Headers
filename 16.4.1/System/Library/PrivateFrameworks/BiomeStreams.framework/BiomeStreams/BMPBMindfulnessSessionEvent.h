@interface BMPBMindfulnessSessionEvent : PBCodable <NSCopying> {
    struct { unsigned char sessionType : 1; unsigned char stateType : 1; } _has;
}

@property (nonatomic) BOOL hasSessionType;
@property (nonatomic) int sessionType;
@property (nonatomic) BOOL hasStateType;
@property (nonatomic) int stateType;

- (id)stateTypeAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsStateType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsSessionType:(id)a0;
- (id)sessionTypeAsString:(int)a0;

@end
