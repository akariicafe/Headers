@class NSMutableArray, PBUnknownFields;

@interface GEOPDTransitAttribution : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_providerNames;
}

@property (retain, nonatomic) NSMutableArray *providerNames;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)providerNameType;
+ (id)transitAttributionForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addProviderName:(id)a0;
- (unsigned long long)providerNamesCount;
- (void)clearProviderNames;
- (id)providerNameAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
