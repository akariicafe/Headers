@class PBDataReader, GEOPDChildActionDirections, GEOPDChildActionSearch, GEOPDChildActionFlyover, PBUnknownFields;

@interface GEOPDChildAction : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDChildActionDirections *_childActionDirections;
    GEOPDChildActionFlyover *_childActionFlyover;
    GEOPDChildActionSearch *_childActionSearch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _childActionType;
    struct { unsigned char has_childActionType : 1; unsigned char read_unknownFields : 1; unsigned char read_childActionDirections : 1; unsigned char read_childActionFlyover : 1; unsigned char read_childActionSearch : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasChildActionType;
@property (nonatomic) int childActionType;
@property (readonly, nonatomic) BOOL hasChildActionDirections;
@property (retain, nonatomic) GEOPDChildActionDirections *childActionDirections;
@property (readonly, nonatomic) BOOL hasChildActionFlyover;
@property (retain, nonatomic) GEOPDChildActionFlyover *childActionFlyover;
@property (readonly, nonatomic) BOOL hasChildActionSearch;
@property (retain, nonatomic) GEOPDChildActionSearch *childActionSearch;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)childActionTypeAsString:(int)a0;
- (int)StringAsChildActionType:(id)a0;
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
