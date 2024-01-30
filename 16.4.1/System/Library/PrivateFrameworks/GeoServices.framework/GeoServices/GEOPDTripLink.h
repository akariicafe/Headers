@class NSData, PBUnknownFields;

@interface GEOPDTripLink : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSData *_linkGeometry;
    unsigned long long _linkId;
    struct { unsigned char has_linkId : 1; } _flags;
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
