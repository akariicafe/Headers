@class NSString;

@interface GEOLogMsgEventPlaceDataCache : PBCodable <NSCopying> {
    NSString *_placeDataRequestingAppIdentifier;
}

@property (readonly, nonatomic) BOOL hasPlaceDataRequestingAppIdentifier;
@property (retain, nonatomic) NSString *placeDataRequestingAppIdentifier;

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
- (void).cxx_destruct;

@end
