@class GEORPThirdPartyPhotoSharingPreference, PBDataReader;

@interface GEORPThirdPartyPhotoSharingPreferenceUpdateResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _errors;
    GEORPThirdPartyPhotoSharingPreference *_preference;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_errors : 1; unsigned char read_preference : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long errorsCount;
@property (readonly, nonatomic) int *errors;
@property (readonly, nonatomic) BOOL hasPreference;
@property (retain, nonatomic) GEORPThirdPartyPhotoSharingPreference *preference;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)clearErrors;
- (int)StringAsErrors:(id)a0;
- (id)errorsAsString:(int)a0;
- (void)addErrors:(int)a0;
- (int)errorsAtIndex:(unsigned long long)a0;
- (void)setErrors:(int *)a0 count:(unsigned long long)a1;

@end
