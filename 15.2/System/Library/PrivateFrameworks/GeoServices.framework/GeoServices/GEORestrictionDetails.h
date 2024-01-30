@class PBDataReader, GEOFormattedString, NSMutableArray, PBUnknownFields;

@interface GEORestrictionDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_messageStrings;
    GEOFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_messageStrings : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) GEOFormattedString *title;
@property (retain, nonatomic) NSMutableArray *messageStrings;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)messageStringType;

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
- (void)addMessageString:(id)a0;
- (unsigned long long)messageStringsCount;
- (void)clearMessageStrings;
- (id)messageStringAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
