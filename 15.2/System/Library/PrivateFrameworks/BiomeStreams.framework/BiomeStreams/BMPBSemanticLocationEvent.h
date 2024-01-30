@interface BMPBSemanticLocationEvent : PBCodable <NSCopying> {
    struct { unsigned char placeType : 1; unsigned char userSpecificPlaceType : 1; unsigned char starting : 1; } _has;
}

@property (nonatomic) BOOL hasStarting;
@property (nonatomic) BOOL starting;
@property (nonatomic) BOOL hasUserSpecificPlaceType;
@property (nonatomic) int userSpecificPlaceType;
@property (nonatomic) BOOL hasPlaceType;
@property (nonatomic) int placeType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)placeTypeAsString:(int)a0;
- (int)StringAsPlaceType:(id)a0;
- (id)dictionaryRepresentation;
- (id)userSpecificPlaceTypeAsString:(int)a0;
- (int)StringAsUserSpecificPlaceType:(id)a0;

@end
