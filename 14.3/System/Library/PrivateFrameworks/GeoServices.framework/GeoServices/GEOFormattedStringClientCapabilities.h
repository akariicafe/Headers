@class PBUnknownFields;

@interface GEOFormattedStringClientCapabilities : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _concatenatingFormatStringsSupported;
    BOOL _styleSupported;
    BOOL _timestampFormatPatternSupported;
    struct { unsigned char has_concatenatingFormatStringsSupported : 1; unsigned char has_styleSupported : 1; unsigned char has_timestampFormatPatternSupported : 1; } _flags;
}

@property (nonatomic) BOOL hasConcatenatingFormatStringsSupported;
@property (nonatomic) BOOL concatenatingFormatStringsSupported;
@property (nonatomic) BOOL hasTimestampFormatPatternSupported;
@property (nonatomic) BOOL timestampFormatPatternSupported;
@property (nonatomic) BOOL hasStyleSupported;
@property (nonatomic) BOOL styleSupported;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
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
