@class NSString, GEOPDMapsIdentifier, GEOLatLng, NSMutableArray, PBDataReader;

@interface GEORPPoiEnrichmentPlaceContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_entityNames;
    NSMutableArray *_localizedAddress;
    NSString *_mapsCategoryId;
    GEOLatLng *_placeCenter;
    GEOPDMapsIdentifier *_placeId;
    NSString *_walletCategoryId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_entityNames : 1; unsigned char read_localizedAddress : 1; unsigned char read_mapsCategoryId : 1; unsigned char read_placeCenter : 1; unsigned char read_placeId : 1; unsigned char read_walletCategoryId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPlaceId;
@property (retain, nonatomic) GEOPDMapsIdentifier *placeId;
@property (retain, nonatomic) NSMutableArray *entityNames;
@property (readonly, nonatomic) BOOL hasMapsCategoryId;
@property (retain, nonatomic) NSString *mapsCategoryId;
@property (readonly, nonatomic) BOOL hasWalletCategoryId;
@property (retain, nonatomic) NSString *walletCategoryId;
@property (retain, nonatomic) NSMutableArray *localizedAddress;
@property (readonly, nonatomic) BOOL hasPlaceCenter;
@property (retain, nonatomic) GEOLatLng *placeCenter;

+ (Class)entityNameType;
+ (Class)localizedAddressType;
+ (id)buildPlaceContextWithPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (unsigned long long)muid;
- (void)readAll:(BOOL)a0;
- (void)addEntityName:(id)a0;
- (void)addLocalizedAddress:(id)a0;
- (unsigned long long)entityNamesCount;
- (void)clearEntityNames;
- (id)entityNameAtIndex:(unsigned long long)a0;
- (unsigned long long)localizedAddressCount;
- (void)clearLocalizedAddress;
- (id)localizedAddressAtIndex:(unsigned long long)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
