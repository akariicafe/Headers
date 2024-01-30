@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDBusinessClaim : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_buttonLabel;
    NSString *_descriptionText;
    NSString *_titleText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _buttonEnabled;
    struct { unsigned char has_buttonEnabled : 1; unsigned char read_unknownFields : 1; unsigned char read_buttonLabel : 1; unsigned char read_descriptionText : 1; unsigned char read_titleText : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasButtonLabel;
@property (retain, nonatomic) NSString *buttonLabel;
@property (nonatomic) BOOL hasButtonEnabled;
@property (nonatomic) BOOL buttonEnabled;
@property (readonly, nonatomic) BOOL hasTitleText;
@property (retain, nonatomic) NSString *titleText;
@property (readonly, nonatomic) BOOL hasDescriptionText;
@property (retain, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)businessClaimForPlaceData:(id)a0;
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
