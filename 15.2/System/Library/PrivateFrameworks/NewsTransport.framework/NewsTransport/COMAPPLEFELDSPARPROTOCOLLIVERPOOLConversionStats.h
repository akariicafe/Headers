@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats : PBCodable <NSCopying> {
    struct { unsigned char conversions : 1; unsigned char impressions : 1; } _has;
}

@property (nonatomic) BOOL hasConversions;
@property (nonatomic) double conversions;
@property (nonatomic) BOOL hasImpressions;
@property (nonatomic) double impressions;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
