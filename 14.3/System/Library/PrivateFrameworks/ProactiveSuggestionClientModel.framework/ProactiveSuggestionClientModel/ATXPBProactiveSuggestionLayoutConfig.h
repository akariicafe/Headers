@interface ATXPBProactiveSuggestionLayoutConfig : PBCodable <NSCopying> {
    struct { unsigned char applicableLayoutType : 1; } _has;
}

@property (nonatomic) BOOL hasApplicableLayoutType;
@property (nonatomic) int applicableLayoutType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)applicableLayoutTypeAsString:(int)a0;
- (int)StringAsApplicableLayoutType:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
