@class GEOPDBusinessHours, PBUnknownFields;

@interface GEOPDBusinessHoursData : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDBusinessHours *_businessHours;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
