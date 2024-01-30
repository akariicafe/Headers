@class PBUnknownFields;

@interface GEOPDAutocompleteEntryOfflineArea : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _featureId;
    BOOL _availableForDownload;
    struct { unsigned char has_featureId : 1; unsigned char has_availableForDownload : 1; } _flags;
}

@property (nonatomic) BOOL hasFeatureId;
@property (nonatomic) unsigned long long featureId;
@property (nonatomic) BOOL hasAvailableForDownload;
@property (nonatomic) BOOL availableForDownload;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
