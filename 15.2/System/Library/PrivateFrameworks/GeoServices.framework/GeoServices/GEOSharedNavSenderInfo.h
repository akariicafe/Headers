@class NSString, PBDataReader, PBUnknownFields;

@interface GEOSharedNavSenderInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_fromDisplayName;
    NSString *_fromIdentifier;
    NSString *_localContactIdentifier;
    NSString *_localName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_fromDisplayName : 1; unsigned char read_fromIdentifier : 1; unsigned char read_localContactIdentifier : 1; unsigned char read_localName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocalName;
@property (retain, nonatomic) NSString *localName;
@property (readonly, nonatomic) BOOL hasLocalContactIdentifier;
@property (retain, nonatomic) NSString *localContactIdentifier;
@property (readonly, nonatomic) BOOL hasFromIdentifier;
@property (retain, nonatomic) NSString *fromIdentifier;
@property (readonly, nonatomic) BOOL hasFromDisplayName;
@property (retain, nonatomic) NSString *fromDisplayName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
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
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
