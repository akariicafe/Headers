@class PBDataReader, NSString, GEOABConfigValue, PBUnknownFields;

@interface GEOABConfigKeyValuePair : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_abConfigKey;
    GEOABConfigValue *_abConfigValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _abConfigValueType;
    struct { unsigned char has_abConfigValueType : 1; unsigned char read_unknownFields : 1; unsigned char read_abConfigKey : 1; unsigned char read_abConfigValue : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasAbConfigKey;
@property (retain, nonatomic) NSString *abConfigKey;
@property (nonatomic) BOOL hasAbConfigValueType;
@property (nonatomic) int abConfigValueType;
@property (readonly, nonatomic) BOOL hasAbConfigValue;
@property (retain, nonatomic) GEOABConfigValue *abConfigValue;
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
- (id)abConfigValueTypeAsString:(int)a0;
- (int)StringAsAbConfigValueType:(id)a0;
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
