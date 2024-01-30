@class PBDataReader, NSString, NSData, PBUnknownFields;

@interface GEOPDResultRefinementMetadataDefault : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_refinementKey;
    NSData *_refinementValueMetadata;
    NSString *_refinementValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _refinementMetadataDefaultType;
    unsigned int _selectionFromQuerySequenceNumber;
    BOOL _selectionFromQuery;
    struct { unsigned char has_refinementMetadataDefaultType : 1; unsigned char has_selectionFromQuerySequenceNumber : 1; unsigned char has_selectionFromQuery : 1; unsigned char read_unknownFields : 1; unsigned char read_refinementKey : 1; unsigned char read_refinementValueMetadata : 1; unsigned char read_refinementValue : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasRefinementKey;
@property (retain, nonatomic) NSString *refinementKey;
@property (nonatomic) BOOL hasRefinementMetadataDefaultType;
@property (nonatomic) int refinementMetadataDefaultType;
@property (readonly, nonatomic) BOOL hasRefinementValue;
@property (retain, nonatomic) NSString *refinementValue;
@property (readonly, nonatomic) BOOL hasRefinementValueMetadata;
@property (retain, nonatomic) NSData *refinementValueMetadata;
@property (nonatomic) BOOL hasSelectionFromQuerySequenceNumber;
@property (nonatomic) unsigned int selectionFromQuerySequenceNumber;
@property (nonatomic) BOOL hasSelectionFromQuery;
@property (nonatomic) BOOL selectionFromQuery;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
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
- (int)StringAsRefinementMetadataDefaultType:(id)a0;
- (id)refinementMetadataDefaultTypeAsString:(int)a0;

@end
