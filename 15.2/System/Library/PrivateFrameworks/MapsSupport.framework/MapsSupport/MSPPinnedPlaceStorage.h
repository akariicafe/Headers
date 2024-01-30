@class GEOMapItemStorage, NSString, NSMutableArray, PBUnknownFields;

@interface MSPPinnedPlaceStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char type : 1; unsigned char hidden : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasCustomName;
@property (retain, nonatomic) NSString *customName;
@property (readonly, nonatomic) BOOL hasMapItemStorage;
@property (retain, nonatomic) GEOMapItemStorage *mapItemStorage;
@property (retain, nonatomic) NSMutableArray *contactStorages;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) BOOL hidden;
@property (readonly, nonatomic) BOOL hasOriginatingAddressString;
@property (retain, nonatomic) NSString *originatingAddressString;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)contactStorageType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (unsigned long long)contactStoragesCount;
- (void)addContactStorage:(id)a0;
- (void)clearContactStorages;
- (id)contactStorageAtIndex:(unsigned long long)a0;

@end
