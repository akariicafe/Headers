@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDSearchPlaceContextMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_alternateSearchableNames;
    NSString *_interpretedCategory;
    NSString *_matchedDisplayNameLanguageCode;
    NSString *_matchedDisplayName;
    NSString *_normalizedQuery;
    NSString *_secondaryNameOverrideLanguage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isDefaultName;
    struct { unsigned char has_isDefaultName : 1; unsigned char read_unknownFields : 1; unsigned char read_alternateSearchableNames : 1; unsigned char read_interpretedCategory : 1; unsigned char read_matchedDisplayNameLanguageCode : 1; unsigned char read_matchedDisplayName : 1; unsigned char read_normalizedQuery : 1; unsigned char read_secondaryNameOverrideLanguage : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
