@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDJoeColor : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_backgroundColor;
    NSString *_primaryTextColor;
    NSString *_quaternaryTextColor;
    NSString *_secondaryTextColor;
    NSString *_tertiaryTextColor;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_backgroundColor : 1; unsigned char read_primaryTextColor : 1; unsigned char read_quaternaryTextColor : 1; unsigned char read_secondaryTextColor : 1; unsigned char read_tertiaryTextColor : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasBackgroundColor;
@property (retain, nonatomic) NSString *backgroundColor;
@property (readonly, nonatomic) BOOL hasPrimaryTextColor;
@property (retain, nonatomic) NSString *primaryTextColor;
@property (readonly, nonatomic) BOOL hasSecondaryTextColor;
@property (retain, nonatomic) NSString *secondaryTextColor;
@property (readonly, nonatomic) BOOL hasTertiaryTextColor;
@property (retain, nonatomic) NSString *tertiaryTextColor;
@property (readonly, nonatomic) BOOL hasQuaternaryTextColor;
@property (retain, nonatomic) NSString *quaternaryTextColor;
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
