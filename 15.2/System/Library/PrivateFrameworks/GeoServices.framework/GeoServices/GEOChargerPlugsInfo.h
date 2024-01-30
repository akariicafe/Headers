@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOChargerPlugsInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_suggestedChargerPlugs;
    NSMutableArray *_supportedChargerPlugs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_suggestedChargerPlugs : 1; unsigned char read_supportedChargerPlugs : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *suggestedChargerPlugs;
@property (retain, nonatomic) NSMutableArray *supportedChargerPlugs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)suggestedChargerPlugType;
+ (Class)supportedChargerPlugType;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addSuggestedChargerPlug:(id)a0;
- (void)addSupportedChargerPlug:(id)a0;
- (unsigned long long)suggestedChargerPlugsCount;
- (void)clearSuggestedChargerPlugs;
- (id)suggestedChargerPlugAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedChargerPlugsCount;
- (void)clearSupportedChargerPlugs;
- (id)supportedChargerPlugAtIndex:(unsigned long long)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
