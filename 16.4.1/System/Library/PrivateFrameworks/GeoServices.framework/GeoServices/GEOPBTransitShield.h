@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitShield : PBCodable <GEOTransitShieldDataSource, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_shieldColor;
    NSString *_shieldText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _shieldEnumValue;
    struct { unsigned char has_shieldEnumValue : 1; unsigned char read_unknownFields : 1; unsigned char read_shieldColor : 1; unsigned char read_shieldText : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) long long shieldType;
@property (readonly, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) NSString *shieldColorString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasShieldText;
@property (retain, nonatomic) NSString *shieldText;
@property (nonatomic) BOOL hasShieldEnumValue;
@property (nonatomic) unsigned int shieldEnumValue;
@property (readonly, nonatomic) BOOL hasShieldColor;
@property (retain, nonatomic) NSString *shieldColor;
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
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
