@class GEOPDChildAction, PBUnknownFields, PBDataReader, GEOPDChildPlace;

@interface GEOPDChildItem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDChildAction *_childAction;
    GEOPDChildPlace *_childPlace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _childItemType;
    struct { unsigned char has_childItemType : 1; unsigned char read_unknownFields : 1; unsigned char read_childAction : 1; unsigned char read_childPlace : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasChildItemType;
@property (nonatomic) int childItemType;
@property (readonly, nonatomic) BOOL hasChildPlace;
@property (retain, nonatomic) GEOPDChildPlace *childPlace;
@property (readonly, nonatomic) BOOL hasChildAction;
@property (retain, nonatomic) GEOPDChildAction *childAction;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)childItemTypeAsString:(int)a0;
- (int)StringAsChildItemType:(id)a0;
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
