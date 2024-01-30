@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLocalizedString : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_locale;
    NSString *_stringValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_locale : 1; unsigned char read_stringValue : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)bestStringForCurrentLocale:(id)a0 fallbackToFirstAvailable:(BOOL)a1;
+ (BOOL)isValid:(id)a0;
+ (id)bestLocalizedString:(id)a0 forPreferredLanguages:(id)a1 fallbackToFirstAvailable:(BOOL)a2;
+ (id)bestLocalizedStringForCurrentLocale:(id)a0 fallbackToFirstAvailable:(BOOL)a1;
+ (id)bestString:(id)a0 forPreferredLanguages:(id)a1 fallbackToFirstAvailable:(BOOL)a2;

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
