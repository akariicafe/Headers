@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDExternalActionDetail : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_actionLabel;
    NSString *_actionUrlComponent;
    NSString *_actionUrlVerb;
    NSString *_logoId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_actionLabel : 1; unsigned char read_actionUrlComponent : 1; unsigned char read_actionUrlVerb : 1; unsigned char read_logoId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasActionLabel;
@property (retain, nonatomic) NSString *actionLabel;
@property (readonly, nonatomic) BOOL hasLogoId;
@property (retain, nonatomic) NSString *logoId;
@property (readonly, nonatomic) BOOL hasActionUrlComponent;
@property (retain, nonatomic) NSString *actionUrlComponent;
@property (readonly, nonatomic) BOOL hasActionUrlVerb;
@property (retain, nonatomic) NSString *actionUrlVerb;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
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
