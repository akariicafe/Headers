@class GEOPDModuleConfigurationValue, PBUnknownFields;

@interface GEOPDModuleConfiguration : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDModuleConfigurationValue *_moduleConfigurationValue;
    int _moduleConfigurationType;
    struct { unsigned char has_moduleConfigurationType : 1; } _flags;
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
