@class NSData;

@interface NTPBTocExposure : PBCodable <NSCopying> {
    struct { unsigned char precedingLocation : 1; } _has;
}

@property (nonatomic) BOOL hasPrecedingLocation;
@property (nonatomic) int precedingLocation;
@property (readonly, nonatomic) BOOL hasTocExposureId;
@property (retain, nonatomic) NSData *tocExposureId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsPrecedingLocation:(id)a0;
- (id)precedingLocationAsString:(int)a0;

@end
