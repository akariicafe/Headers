@class NSString, PBDataReader, PBUnknownFields;

@interface GEONameInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_locale;
    NSString *_name;
    NSString *_phoneticName;
    NSString *_shield;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _phoneticType;
    int _shieldType;
    int _signType;
    struct { unsigned char has_phoneticType : 1; unsigned char has_shieldType : 1; unsigned char has_signType : 1; unsigned char read_unknownFields : 1; unsigned char read_locale : 1; unsigned char read_name : 1; unsigned char read_phoneticName : 1; unsigned char read_shield : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasPhoneticName;
@property (retain, nonatomic) NSString *phoneticName;
@property (readonly, nonatomic) BOOL hasShield;
@property (retain, nonatomic) NSString *shield;
@property (nonatomic) BOOL hasShieldType;
@property (nonatomic) int shieldType;
@property (nonatomic) BOOL hasPhoneticType;
@property (nonatomic) int phoneticType;
@property (nonatomic) BOOL hasSignType;
@property (nonatomic) int signType;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)phoneticTypeAsString:(int)a0;
- (int)StringAsPhoneticType:(id)a0;
- (id)signTypeAsString:(int)a0;
- (int)StringAsSignType:(id)a0;
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
