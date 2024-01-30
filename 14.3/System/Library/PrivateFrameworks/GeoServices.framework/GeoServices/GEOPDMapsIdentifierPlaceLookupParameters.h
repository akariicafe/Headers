@class NSMutableArray, PBUnknownFields;

@interface GEOPDMapsIdentifierPlaceLookupParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_mapsIds;
    int _resultProviderId;
    BOOL _enablePartialClientization;
    struct { unsigned char has_resultProviderId : 1; unsigned char has_enablePartialClientization : 1; } _flags;
}

@property (nonatomic) BOOL hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (retain, nonatomic) NSMutableArray *mapsIds;
@property (nonatomic) BOOL hasEnablePartialClientization;
@property (nonatomic) BOOL enablePartialClientization;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)mapsIdType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)mapsIdAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)addMapsId:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)mapsIdsCount;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifiers:(id)a0 resultProviderID:(int)a1;
- (void)clearMapsIds;

@end
