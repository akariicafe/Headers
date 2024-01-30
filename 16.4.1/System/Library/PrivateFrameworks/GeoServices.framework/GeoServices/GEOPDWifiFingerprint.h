@class PBUnknownFields;

@interface GEOPDWifiFingerprint : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _confidence;
    int _labelType;
    int _status;
    struct { unsigned char has_confidence : 1; unsigned char has_labelType : 1; unsigned char has_status : 1; } _flags;
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
