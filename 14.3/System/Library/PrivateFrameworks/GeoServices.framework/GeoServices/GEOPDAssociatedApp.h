@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDAssociatedApp : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_alternateAppAdamIds;
    NSString *_preferredAppAdamId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_alternateAppAdamIds : 1; unsigned char read_preferredAppAdamId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPreferredAppAdamId;
@property (retain, nonatomic) NSString *preferredAppAdamId;
@property (retain, nonatomic) NSMutableArray *alternateAppAdamIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)alternateAppAdamIdType;
+ (id)associatedAppForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addAlternateAppAdamId:(id)a0;
- (unsigned long long)alternateAppAdamIdsCount;
- (void)clearAlternateAppAdamIds;
- (id)alternateAppAdamIdAtIndex:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
