@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEORPCuratedCollectionContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _placeEntityMuids;
    unsigned long long _curatedCollectionMuid;
    NSMutableArray *_imageInfos;
    NSString *_originalDescription;
    NSString *_originalName;
    NSString *_originalUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_curatedCollectionMuid : 1; unsigned char read_unknownFields : 1; unsigned char read_placeEntityMuids : 1; unsigned char read_imageInfos : 1; unsigned char read_originalDescription : 1; unsigned char read_originalName : 1; unsigned char read_originalUrl : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasCuratedCollectionMuid;
@property (nonatomic) unsigned long long curatedCollectionMuid;
@property (readonly, nonatomic) unsigned long long placeEntityMuidsCount;
@property (readonly, nonatomic) unsigned long long *placeEntityMuids;
@property (readonly, nonatomic) BOOL hasOriginalName;
@property (retain, nonatomic) NSString *originalName;
@property (readonly, nonatomic) BOOL hasOriginalUrl;
@property (retain, nonatomic) NSString *originalUrl;
@property (readonly, nonatomic) BOOL hasOriginalDescription;
@property (retain, nonatomic) NSString *originalDescription;
@property (retain, nonatomic) NSMutableArray *imageInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)imageInfoType;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)imageInfosCount;
- (void)clearImageInfos;
- (void)addImageInfo:(id)a0;
- (void)addPlaceEntityMuid:(unsigned long long)a0;
- (void)clearPlaceEntityMuids;
- (id)imageInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)placeEntityMuidAtIndex:(unsigned long long)a0;
- (void)setPlaceEntityMuids:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
